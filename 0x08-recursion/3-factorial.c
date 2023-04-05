#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: number to be calculated
 *
 * Return: n!
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n > 0)
	{
	return (n * factorial(--n));
	}
	return (-1);
}
