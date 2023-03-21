#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: the number to be calculated
 *
 * Return: the last value of n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
		n *= (-1);

	_putchar(last_digit + '0');

	return (last_digit);

}
