#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: number to be printed.
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	if (n < -9)
	print_number(n / -10);
	_putchar('0' - (n % 10));
	}

	if (n >= 0)
	{
	if (n > 9)
	print_number(n / 10);
	_putchar((n % 10) + '0');
	}
}
