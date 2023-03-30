#include "main.h"

/**
  * rot13 - a function that encodes a string using rot13.
  *
  * @s: string pointer to be encoded
  *
  * Return: the encoded string
  */

char *rot13(char *s)
{
	char *initial = s;
	char u[] = {'m', 'z'};
	char l[] = {'a', 'n'};
	char n[] = {13, -13};
	int i;

	while (*s)
	{
	i = 0;
	while (i < 2)
	{
	if ((*s >= l[i] && *s <= u[i]) || (*s >= l[i] - 32 && *s <= u[i] - 32))
	{
	*s += n[i];
	i = 2;
	}

	i++;
	}

	s++;
	}

	s = initial;
	return (s);
}
