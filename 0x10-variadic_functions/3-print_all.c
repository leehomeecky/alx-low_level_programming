#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_str(va_list arg);
void print_flt(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - prints a character
 *
 * @args: valued argument;
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integer
 *
 * @args: valued argument;
 */

void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_str - prints strings
 *
 * @args: valued argument;
 */

void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_flt - prints float
 *
 * @args: valued argument;
 */

void print_flt(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 * @...: are variable aguement
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *q = "";
	print_f funcs[] = {
			{"i", print_int},
			{"c", print_char},
			{"s", print_str},
			{"f", print_flt}
		};

	va_start(args, format);
	while (format && *(format + i))
	{
		j = 0;

		while (j < 4 && *(format + i) != *((funcs + j)->idn))
			j++;

		if (j < 4)
		{
			printf("%s", q);
			(funcs + j)->prt_func(args);
			q = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
