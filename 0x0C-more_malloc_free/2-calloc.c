#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: The higth of the array
 * @size: the width of the array
 *
 * Return: pointer to the allocated memory if success else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *space;
	unsigned int i, *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	mem = space;
	for (i = 0; i < nmemb * size; i++)
	{
	mem[i] = 0;
	}
	return (space);
}
