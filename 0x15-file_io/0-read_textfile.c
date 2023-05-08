#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: pointer to the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: number of bite written || 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_file, w_file, o_file;
	char *space;

	if (filename == NULL)
		return (0);

	space = (char *)malloc(sizeof(char) * letters);
	if (space == NULL)
		return (0);

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, space, letters);
	w_file = write(STDOUT_FILENO, space, r_file);

	if (o_file == -1 || r_file == -1 || w_file == -1 || r_file != w_file)
	{
	free(space);
	return (0);
	}
	free(space);
	close(o_file);

	return (w_file);
}
