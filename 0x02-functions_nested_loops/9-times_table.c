#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, multiply;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiply = i * j;
			if ((multiply / 10) > 0)
				_putchar((multiply / 10) + '0');

			_putchar((multiply % 10) + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');

			if ((multiply + i)  < 10)
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
