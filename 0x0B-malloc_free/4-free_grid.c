#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid.
 *
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; j < height; i++)
		free(grid[i]);
		free(grid);
}
