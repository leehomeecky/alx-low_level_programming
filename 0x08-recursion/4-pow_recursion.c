#include "main.h"

/**
 * _pow_recursion - a function that returns the value of @x
 * raised to the power of @y.
 *
 * @x: number to be calculated
 * @y: the power of @x
 *
 * Return: @x ^ @y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	if (y > 0)
	{
	return (x * _pow_recursion(x, (y - 1)));
	}
	return (-1);
}
