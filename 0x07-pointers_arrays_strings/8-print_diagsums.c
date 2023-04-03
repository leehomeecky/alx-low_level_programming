#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to square array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	unsigned int k = 0, l = 0;

	while (i < size)
	{
		k += *(*(a + i) + i);
		l += *(*(a + i) + j);
		i++;
		j--;
	}
	printf("%d, %d", k, l);
}
