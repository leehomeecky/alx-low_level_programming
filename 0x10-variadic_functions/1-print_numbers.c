#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: numbers of parameters pased in
 * @...: vriable numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL || n == 0)
		return;
	va_start(args, n);
	for (i = 1; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), *separator);
	}
	printf("%d\n", va_arg(args, int));

}
