#include "main.h"

void close_file(int file);
char *make_buf(char *file);

/**
 * make_buf - a function that create buffer space of 1024 byets
 *
 * @file: name of the file to create buffer for
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *make_buf(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}

/**
 * close_file - a function that closes file opened.
 *
 * @file: The file to be closed.
 */
void close_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
	}
}

/**
 * main - entry point.
 *
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int cp_from, cp_to, r_file, w_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buf(argv[2]);
	cp_from = open(argv[1], O_RDONLY);
	r_file = read(cp_from, buffer, BUF_SIZE);
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r_file == -1 || cp_from == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_file = write(cp_to, buffer, r_file);
		if (w_file == -1 || cp_to == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r_file = read(cp_from, buffer, BUF_SIZE);
		cp_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_file > 0);

	free(buffer);
	close_file(cp_from);
	close_file(cp_to);

	return (0);
}
