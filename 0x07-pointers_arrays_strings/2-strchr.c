#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: String to serch through
 * @c: character to find
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
	if (*s == c)
	return (s + i);
	i++;
	}

	return ('\0');

}
