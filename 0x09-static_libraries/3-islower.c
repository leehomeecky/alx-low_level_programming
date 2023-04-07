#include "main.h"

/**
 * _islower - Checks if the int value represent a lower case in Ascii
 *
 * @c: the character in ASCII
 *
 * Return: 1 if character is lower, else return 0;
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
