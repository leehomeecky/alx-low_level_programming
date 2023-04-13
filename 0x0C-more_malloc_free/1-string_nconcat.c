#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int str_len(char *s);

/**
 * str_len - a function to find the length of a string
 *
 * @s: String to be counted
 *
 * Return: length of @s
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(++s));
}


/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string1 to be concatinated to
 * @s2: string2 to concatinate to @s1
 * @n: amount of characters in @s2 to concatinate
 *
 * Return: Poiter to concatinated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int no_s1, no_s2, i, j;
	char empty[] = "", *space;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	no_s1 = str_len(s1);
	no_s2 = str_len(s2);
	if (no_s2 > n)
		no_s2 = n;
	space = (char *)malloc((no_s1 + no_s2 + 1) * sizeof(char));
	if (space == NULL)
		return ('\0');
	while (*s1)
	{
	space[i] = *s1;
	i++;
	s1++;
	}
	for (j = 0; j < no_s2; j++)
	{
	space[i] = s2[j];
	i++;
	}
	space[i] = '\0';
	return (space);
}
