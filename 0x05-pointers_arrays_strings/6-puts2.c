#include "main.h"

/**
  * puts2 - a function that prints every other character of a string, 
  * starting with the first character, followed by a new line.
  *
  * @str: String to be printed
  *
  */

void puts2(char *str);
{
	int i = 1;

	while (*s)
	{
		if ((i % 2) == 1)
		{
			_putchar(*s);
		}
		s++;
		i++;
	}

}
