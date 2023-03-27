#include "main.h"
#include <stdio.h>

/**
  * print_array -  a function that prints n elements of an array of integers,
  * followed by a new line.
  *
  * @a: Integer pointer to be printed
  * @n: number of indexis to be printed
  *
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		if (i < (n - 1))
		{
			printf("%d, ", *a);
		}
		else
		{
			printf("%d", *a);
		}
		a++;
		i++;
	}

	_putchar('\n');
}
