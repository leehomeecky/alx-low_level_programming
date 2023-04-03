#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: Strings to be checked
 * @accept: strings that should make-up @s
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0, i = 0;

	while (s[i])
	{
		while (*accept)
		{
		if (*accept == s[i])
			j++;
		accept++;
		}

		if (i >= j)
		break;

		i++;
	}
	return (j);
}
