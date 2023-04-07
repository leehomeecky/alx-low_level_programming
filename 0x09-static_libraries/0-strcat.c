#include "main.h"

/**
  * _strcat - a function that concatenates two strings.
  *
  * @dest: string 1 to be concatinated to
  * @src: string 2 to be concartinated
  *
  * Return: a pointer to the resulting string dest (Success)
  */

char *_strcat(char *dest, char *src)
{
	char *initial = dest;
	int i = 0;

	while (*dest)
	{
	i++;
	dest++;
	}

	dest = initial;

	while (*src)
	{
	dest[i] = *src;
	i++;
	src++;
	}

	return (dest);
}
