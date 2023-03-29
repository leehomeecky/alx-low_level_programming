#include "main.h"

/**
  * _strncpy - a function that copies a string.
  *
  * @dest: string pointer to be copied into to
  * @src: string 2 to be cpied
  * @n: the amount of bytes of @src to be copied
  *
  * Return: a pointer to the resulting string dest (Success)
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *initial = dest;
	int i = 0;

	while (*dest)
	{
	if (i < n)
	{
		if (*src)
		{
		*dest = *src;
		src++;
		}
		else
		{
		*dest = '\0';
		}
	}
	i++;
	dest++;
	}

	dest = initial;

	return (dest);
}
