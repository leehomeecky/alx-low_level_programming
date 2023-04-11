#include <stdlib.h>
#include "main.h"

int str_len(char *str);
/**
 * str_len - a function to get the legnth of string
 *
 * @str: pointer to string to be counted
 *
 * Return: string length
 */


int str_len(char *str)
{
	if (*str == '\0' || *srt == NULL)
	return (0);
	return (1 + str_len(++str));
}


/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated.
 *
 * Return: pointer to the duplicated sting, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *space;
	int i, size;

	size = str_len(str);
	if (size != 0)
	{
	space = (char *)malloc(size);
	if (space != NULL)
	{
		for (i = 0; i < size; i++)
		{
		space[i] = str[i];
		}
		return (space);
	}
	}
	return ('\0');
}
