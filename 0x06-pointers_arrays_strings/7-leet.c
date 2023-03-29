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

	while (*str)
	{
		if (*str == 'a' || *str == 'A')
		*str = '4';
		else if (*str == 'e' || *str == 'E')
		*str = '3';
		else if (*str == 'o' || *str == 'O')
		*str = '0';
		else if (*str == 't' || *str == 'T')
		*str = '7';
		else if (*str == 'l' || *str == 'L')
		*str = '1';

		str++;
	}

	str = initial;
	return (str);
}
