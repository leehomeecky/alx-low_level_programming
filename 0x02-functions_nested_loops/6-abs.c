#include "main.h"

/**
 * _abs - calculates the absolute value of a given number
 *
 * @n: the number to be calculated
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n *= (-1);

	return (n);

}
