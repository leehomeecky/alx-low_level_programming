#include "main.h"

int is_prime_number(int n);
int find_divisor(int n, int root);

/**
 * find_divisor - a function that finds a devisor of a number.
 *
 * @n: number to find the devisor
 * @root: range of number to search through
 *
 * Return: @root
 */

int find_divisor(int n, int root)
{
	if (root > 0)
	{
		if ((n % root) == 0 && root > 1)
		return (0);
		if ((root + 1) > 1 && n % (root + 1) == 0)
		return (0);
		if ((root - 1) > 1 && n % (root - 1) == 0)
		return (0);
		if ((n % root) > 0)
		{
		return (find_divisor(n, (root / 2)));
		}
	}
	return (1);
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: number to check if it is a prime
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (find_divisor(n, (n / 2)));
}
