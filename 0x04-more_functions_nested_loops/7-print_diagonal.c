#include "main.h"

/**
  * print_diagonal - a function that draws a diagonal line on the terminal.
  * followed by a new line.
  *
  * @n: the number of times the character / should be printed
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1;  i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar('/');
		_putchar('\n');
	}

	if (n <= 0)
	{
	_putchar('\n');
	}
}
