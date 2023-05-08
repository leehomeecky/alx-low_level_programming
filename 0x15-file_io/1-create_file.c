#include "main.h"

int str_len(char *str);

/**
 * str_len - a function to get length of string
 *
 * @str: string to find the length
 *
 * Return: length of string
 */


int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_len(++str));
}

/**
 * create_file - a function that creates a file.
 *
 * @filename: pointer to the file to be created
 * @text_content: pointer to text to be writen to filename
 *
 * Return: 1 if successfull || -1
 */

int create_file(const char *filename, char *text_content)
{
	int w_file, o_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	len = str_len(text_content);

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, len);

	if (o_file == -1 || w_file == -1)
	return (-1);
	close(o_file);

	return (1);
}
