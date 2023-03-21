#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: starting point for the counter
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}

	printf("\n");
}
