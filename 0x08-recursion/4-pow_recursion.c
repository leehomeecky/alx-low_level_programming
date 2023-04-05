#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 *
 * @n: number to be calculated
 *
 * Return: n!
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	if (n > 0)
	{
	return (x * _pow_recursion(x, (y - 1)));
	}
	return (-1);
}
