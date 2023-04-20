#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: is the string to be printed between the strings
 * @n: size of argument
 * @...: variable argument passed in
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
