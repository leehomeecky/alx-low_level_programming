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
	void **space;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);
	space = (void **)malloc(nmemb * sizeof(void *));
	if (space == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
	space[i] = (void *)malloc(size);
	if (space[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(space[i]);
		}
		free(space);
		return (NULL);
	}
	}
	return (space);
}
