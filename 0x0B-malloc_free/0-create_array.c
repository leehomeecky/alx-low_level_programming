#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array of character to be created
 * @c: character to initialize the memory space
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *space;
	int i;

	if (size != 0)
	{
	space = (char *)malloc(size);
	if (space != NULL)
	{
		for (i = 0; i < size; i++)
		{
		space[i] = c;
		}
		return (space);
	}
	}
	return ('\0');
}
