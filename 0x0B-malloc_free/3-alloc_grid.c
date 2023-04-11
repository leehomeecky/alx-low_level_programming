#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **space;

	if (width < 1 && height < 1)
		return (NULL);
	space = (int **)malloc(height * sizeof(int *));
	if (space == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		space[i] = (int *)malloc(width * sizeof(int));
		if (space[i] == NULL)
		{
		for (j = i - 1; j >= 0; j--)
		{
			free(space[j]);
		}
		free(space);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			space[i][j] = 0;
		}
	}
	return (space);
}
