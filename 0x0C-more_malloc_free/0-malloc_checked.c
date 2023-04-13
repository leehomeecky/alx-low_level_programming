#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: the amount of memory to be allocated
 *
 * Return: pointer to the allocated memory if true else exit with code 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i != NULL)
		return (i);
	exit(98);
}
