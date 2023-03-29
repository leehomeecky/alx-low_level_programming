#include "main.h"

/**
  * _strncat - a function that concatenates two strings.
  *
  * @dest: string 1 to be concatinated to
  * @src: string 2 to be concartinated
  * @n: the amount of bytes of @src to be concatinated
  *
  * Return: a pointer to the resulting string dest (Success)
  */

char *_strncat(char *dest, char *src, int n)
{
	char *initial = dest;
	int i = 0, j = 0;

	while (*dest)
	{
	i++;
	dest++;
	}

	dest = initial;

	while (*src)
	{
	if (j < n)
	{
	dest[i] = *src;
	}
	else
	{
	break;
	}
	i++;
	j++;
	src++;
	}

	return (dest);
}
