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
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i = 0;


	while (*str)
	{
		while (i < 5)
		{
		if (*str == a[i] || *str == (a[i] - 32))
		*str = n[i];

		i++;
		}

		str++;
	}

	str = initial;
	return (str);
}
