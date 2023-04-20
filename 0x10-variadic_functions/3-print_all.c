#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_str(va_list args);
void print_flt(va_list args);
void print_all(const char * const format, ...);
/**
 * print_char - prints a character
 *
 * @args: valued argument;
 */

void print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	printf("%c", s);
}

/**
 * print_int - prints integer
 *
 * @args: valued argument;
 */

void print_int(va_list args)
{
	int i;

	i= va_arg(args, int);
	printf("%i", i);
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
	float i;
	
	i = va_arg(args, double);
	printf("%f", i);
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
	print_f x[] = {
			{"i", print_int},
			{"c", print_char},
			{"s", print_str},
			{"f", print_flt}
		};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(x[j].idn)))
			j++;
		if (j < 4)
		{
		printf("%s", q);
		x[j].prt_func(args);
		q = ",";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
