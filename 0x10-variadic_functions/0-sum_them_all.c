#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: number of parametrers passed in
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum of all numbers, or return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		x += va_arg(args, int);
	va_end(args);
	return (x);

}
