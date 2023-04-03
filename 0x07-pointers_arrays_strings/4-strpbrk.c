#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: Strings to be checked
 * @accept: strings that should to match-up @s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0, i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
		if (accept[j] == s[i])
		return (s + i);
		j++;
		}

		i++;
	}
	return ('\0');
}
