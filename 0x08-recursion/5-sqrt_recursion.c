#include "main.h"

int find_root(int n, int root);

/**
 * find_root - a function that finds the root of a number.
 *
 * @n: number to find the root
 * @root: range of number to search through
 *
 * Returns @root
 */

find_root(int n, int root)
{
	if ((root * root) == n)
		return (root);
	else if ((root * root) < n)
	{
		if (((root + 1) * (root + 1)) == n)
			return ((root + 1));
		else if (((root + 1) * (root + 1)) < n)
			return (find_root(n, (root + 1)));
	}
	else if ((root * root) > n)
	{
		if (((root - 1) * (root - 1)) == n)
		return ((root - 1));
		else if (((root - 1) * (root - 1)) > n)
		return (find_root(n, (root / 2)));
	}
	return (-1);
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a
 * number.
 *
 * @n: number to find square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (find_root(n, (n / 2)));
}
