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
	char temp;
	char *initial = s

	while (*s)
	{
		s++;
		len++;
	}

	len--;
	s = initial;

	while (len > index)
	{
		temp = s[len];
		s[len] = s[index];
		s[index] = temp;

		index++;
		len--;
	}

}
