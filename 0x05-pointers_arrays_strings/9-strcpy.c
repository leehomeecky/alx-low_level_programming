#include "main.h"

/**
  * _strcpy - a function that copies the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest.
  *
  * @src: String to be copied
  * @dest: String poimter to be copied to
  *
  * Return: dest if success
  *
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = src[i];
		src++;
		i++;
	}

	return (dest);
}
