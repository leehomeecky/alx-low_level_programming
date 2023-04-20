#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

/**
 * struct print_stc - structure for print functions, and identifier;
 *
 * @idn: identifier for function;
 * @prt_func: print function pointer;
 */

typedef struct print_stc
	{
	char *idn;
	void (*prt_func)(va_list args);
	} print_f;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
