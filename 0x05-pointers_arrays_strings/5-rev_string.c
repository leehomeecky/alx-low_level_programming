#include "main.h"

/**
  * rev_string - a function that reverses a string.
  *
  * @s: String to be reversed
  *
  */

void rev_string(char *s)
{
	int len, index = 0;

	while (*s)
	{
		s++;
		len++;
	}

	char invers[(len + 1)];

	invers[len] = '\0';

	s--;

	while (*s > 0)
	{
		invers[index] = *s;
		index++;
		s--;
	}

	s = invers;
}
