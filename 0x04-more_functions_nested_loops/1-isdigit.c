#include "main.h"

/**
  * _isdigit -  a function that checks for a digit (0 through 9).
  *
  * @c: value to be checked
  *
  * Return: 1 if digit, 0 if not digit
  */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}

	return (0);
}
