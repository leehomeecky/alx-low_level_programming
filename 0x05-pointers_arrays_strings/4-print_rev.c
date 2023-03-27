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
	int len = _strlen(s);

	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}

	_putchar('\n');
}
