#include "main.h"

/**
  * leet - a function that encodes a string into 1337.
  *
  * @str: string pointer to beencoded
  *
  * Return: the encoded string
  */

char *leet(char *str)
{
	char *initial = str;
	char *values = "AaEeOoTtLl";
	char digit[] = "4433007711";
	int i = 0;
	char *start = values;


	while (*str)
	{
		while (*values)
		{
		if (*str == *values)
		*str = digit[i];

		values++;
		i++;
		}

		values = start;
		str++;
	}

	str = initial;
	return (str);
}
