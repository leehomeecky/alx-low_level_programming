#include "main.h"

/**
  * _isupper - a function that checks for uppercase character
  *
  * @c: value to be checked
  *
  * Return: 1 if upper, 0 if not upper
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}

	return (0);
}
