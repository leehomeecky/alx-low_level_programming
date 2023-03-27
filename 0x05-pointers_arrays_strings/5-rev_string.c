#include "main.h"

/**
  * rev_string - a function that reverses a string.
  *
  * @s: String to be reversed
  *
  */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;
	char *initial = s

	while (*s)
	{
		i++;
	}

	i--;
	s = initial;

	while (i > j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i--;
		j++;
	}

}
