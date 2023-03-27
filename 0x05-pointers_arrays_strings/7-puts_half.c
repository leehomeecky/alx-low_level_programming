#include "main.h"

/**
  * puts_half - a function that prints half of a string,
  * followed by a new line.
  *
  * @str: String to be printed
  *
  */

void puts_half(char *str)
{
	int index, i = 0;
	char *initial = str;

	while (*str)
	{
		str++;
		i++;
	}

	if ((i % 2) == 0)
	{
		index = i / 2;
	}
	else
	{
		index = (i / 2) + 1;
	}

	str = initial;
	i = 0;

	while (*str)
	{
		if (i >= index)
		{
		_putchar(*str);
		}
		str++;
		i++;
	}

	_putchar('\n');
}
