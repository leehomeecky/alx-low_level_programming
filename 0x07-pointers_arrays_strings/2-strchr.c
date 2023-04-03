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
	while (*s)
	{
	if (*s == c)
	break;
	s++;
	}
	return (s);

}
