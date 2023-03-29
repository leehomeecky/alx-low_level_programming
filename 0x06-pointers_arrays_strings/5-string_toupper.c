#include "main.h"

/**
  * string_toupper - a function that changes all lowercase letters of
  * a string to uppercase.
  *
  * @str: string pointer to be capitalized
  *
  * Return: the reversed character
  */

char *string_toupper(char *str)
{
	char *initial = str;

	while (*str)
	{
		if (*str > 'Z')
		{
		*str -= 32;
		}
		str++;
	}

	str = initial;
	return (str);
}
