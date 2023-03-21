#include "main.h"

/**
 * print_sign - checks if a digit is positive, negative, or zero
 * then ptints the sign,
 *
 * @n: The number to be checked
 *
 * Return: 1 if n is positive, -1 if n is negative, or 0 if n is zero;
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
