#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * array_range - a function that creates an array of integers.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to allocated memory
 */


int *array_range(int min, int max)
{
	int i = 0, *space;
	if (min > max)
		return (NULL);
	space = (int *)malloc((max - min + 1) * sizeof(int));
	if (space == NULL)
		 return (NULL);
	while (min <= max)
	{
	space[i] = min;
	i++;
	min++;
	}
	return (space);
}
