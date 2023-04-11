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
	if (*str == '\0')
	return (0);
	return (1 + str_len(++str));
}


/**
 * str_concat - a function that concatenates two strings.
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @s1: string 1 to concatinate to.
 * @s2: string 2 to concatinate.
 *
 * Return: pointer to concatinares string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *space, empty[] = "";
	int i, j, size_s1, size_s2;

	if (s1 == NULL)
	s1 = empty;
	if (s2 == NULL)
	s2 = empty;
	size_s1 = str_len(s1);
	size_s2 = str_len(s2);
	space = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (space != NULL)
	{
		for (i = 0; i < size_s1; i++)
		space[i] = s1[i];
		for (j = 0; j < size_s2; j++)
		space[(i + j)] = s2[j];
		space[(i + j)] = '\0';

		return (space);
	}
	return ('\0');
}
