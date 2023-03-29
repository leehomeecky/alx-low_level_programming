#include "main.h"

/**
  * reverse_array - a function that reverses the content of
  * an array of integers.
  *
  * @a: pointer to array to be reversed
  * @n: number of element in array a
  */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
	a[n] = temp;
	a[n] = a[i];
	a[i] = temp;
	i++;
	n--;
	}
}
