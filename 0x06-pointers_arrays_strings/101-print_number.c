#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: number to be printed.
 *
 */

void print_number(int n)
{
	unsigned int temp, d = n;
	int i = 1;

	if (d < 0)
	{
	_putchar('-');
	 d *= -1;
	}
	temp = d;

	if ((d / 10) == 0)
	{
	_putchar(d + '0');
	}
	else
	{
	while ((d / 10) > 0)
	{
	i *= 10;
	d /= 10;
	}
	_putchar(d + '0');
	d = temp % i;
	print_number(d);
	}
}
