#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to memory area to be filed
 * @n: number of bytes of the memory area pointed to by @s to be filled
 * @b: values to be filled in to the memory
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *initial = s;

	while (*s)
	{
	if (n > 0)
	*s = 'b';
	else
	break;
	n--;
	s++;
	}

	return (initial);
}
