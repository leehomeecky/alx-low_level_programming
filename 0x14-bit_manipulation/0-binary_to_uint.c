#include "main.h"

unsigned int str_len(const char *);
/**
 * str_len - a function to grt the length of a string
 *
 * @str - pointer to string to be counted
 *
 * Return: length of string
 */

unsigned int str_len(const char *str)
{
	if (*str == '\0' || str == NULL)
		return (0);

	return (1 + str_len(++str));
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0, mul = 1;

	if (b == NULL)
		return (0);
	len = str_len(b);
	while ((len -= 1) >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		num += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}
	return (num);
}
