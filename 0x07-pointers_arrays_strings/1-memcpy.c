#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: destination to be copied to
 * @src: origin to be copied from
 * @n: number of bytes to copy
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *initial = dest;

	while (n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	return (initial);
}
