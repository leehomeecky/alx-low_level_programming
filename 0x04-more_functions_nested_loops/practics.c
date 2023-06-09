#include "main.h"

/**
  * print_number - a function that prints an integer.
  *
  * @n: integer to be printed
  */

void print_number(int n)
{
	unsigned int n_value, i;
	int digit, j;

	n_value = n;
	i = n;
	digit = 1;

	while ((i / 10) > 0)
	{
	digit++;
	i /= 10;
	}

	while (digit > 0)
	{
		i = n;
		j = 1;

		while (j <= digit)
		{
		if (j == digit)
			_putchar((i % 10) + '0');
		i /= 10;
		j++;
		}

		digit--;
	}
}
