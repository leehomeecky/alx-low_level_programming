#include "main.h"

/**
  * print_rev - a function that prints a string, in reverse,
  * followed by a new line.
  *
  * @s: String to be printed in reverse
  *
  */

void print_rev(char *s)
{
	int len;

	while (*s)
	{
		s++;
	}

	s--;

	while (*s > 0)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
