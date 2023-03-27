#include "main.h"

/**
  * rev_string - a function that reverses a string.
  *
  * @s: String to be reversed
  *
  */

void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	while (s[j++])
	{
		i++;
	}

	i--;
	j = 0;

	while (i > j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i--;
		j++;
	}

}
