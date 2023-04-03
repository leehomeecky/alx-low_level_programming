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
	int i = 0, j = 0;
	int k = 0, d1 = 0, d2 = 0;

	while (i < size)
	{
		while (j < size)
		{
		if (i == j)
		d1 += a[k];
		if ((i + j) == size - 1)
		d2 += a[k];
		k++;
		j++;
		}

		i++;
	}
	printf("%d, %d\n", d1, d2);
}
