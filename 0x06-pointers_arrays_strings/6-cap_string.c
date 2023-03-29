#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string.
  *
  * @str: string pointer to be capitalized
  *
  * Return: the capitalized character
  */

char *cap_string(char *str)
{
	char *initial = str;
	int i = 0;

	while (str[i])
	{
	if (str[i] > 'Z')
	{
		if (i == 0)
		str[i] -= 32;
		else if (str[i - 1] <= '"' || str[i - 1] == ')')
		str[i] -= 32;
		else if (str[i - 1] == '(' || str[i - 1] == '?')
		str[i] -= 32;
		else if (str[i - 1] == '.' || str[i - 1] == ',')
		str[i] -= 32;
		else if (str[i - 1] == ';' || str[i - 1] == '{')
		str[i] -= 32;
		else if (str[i - 1] == '}')
		str[i] -= 32;
	}
		i++;
	}

	str = initial;
	return (str);
}
