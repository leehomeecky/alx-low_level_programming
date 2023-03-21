#include "main.h"

/**
 * _isalpha - Checks if the int value represent a lower case in Ascii
 *
 * @c: the character in ASCII
 *
 * Return: 1 if c is an alphabet, else return 0;
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
