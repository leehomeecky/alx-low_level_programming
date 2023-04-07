#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: srting to serch through
 * @needle: sub_string to check
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, k = 0;

	while (haystack[i] != '\0')
	{
	if (needle[j] != '\0')
	{
	if (haystack[i] == needle[j])
	{
	j++;
	if (k == 0)
	k = i;
	}
	else
	{
	if (j > 0)
	{
	j = 0;
	k = 0;
	}
	}
	}
	else
	{
	return (haystack + k);
	}
	i++;
	}

	return ('\0');
}
