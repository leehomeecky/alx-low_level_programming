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
	
	while (index < (i = 1))
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
