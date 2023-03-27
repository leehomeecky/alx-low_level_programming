#include "main.h"

/**
  * _strlen - a function that returns the length of a string
  *
  * @s: String to be counted
  *
  * Return: string  length if success
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
