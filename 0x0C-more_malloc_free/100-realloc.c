#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size of memory previously allocated
 * @new_size: size of new memory to be allocated
 *
 * Return: pointer to memory allocated or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min, i;
	void *space;
	char *mem, *initial;

	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	(new_size > old_size) ? (min = old_size) : (min = new_size);
	if (new_size == old_size)
		return (ptr);
	space = malloc(new_size);
	if (space == NULL)
		return (NULL);
	mem = space;
	initial = ptr;
	for (i = 0; i < min; i++)
	mem[i] = initial[i];
	free(ptr);
	return (space);
}
