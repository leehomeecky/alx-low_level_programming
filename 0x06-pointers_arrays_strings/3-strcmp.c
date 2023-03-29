#include "main.h"

/**
  * _strcmp - a function that that compares two strings.
  *
  * @s1: string 1 to be compared
  * @s2: string 2 to be compared
  *
  * Return: 0 if equal or defference between the first unmatching char
  * (Success)
  */

int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}

	return (0);
}
