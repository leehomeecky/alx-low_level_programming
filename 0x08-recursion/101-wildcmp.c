#include "main.h"

char *check(char *s1, char *s2);
int wildcmp(char *s1, char *s2);

/**
 * check - Search trough to find the first occurence of a char
 *
 * @s1: char to be searched through
 * @s2: char to mach
 *
 * Return: the pointer to march else 0
 */

char *check(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		if (*s1 == *s2)
		return (s1);
		return (check(++s1, s2));
	}
	return (0);
}

/**
 * wildcmp - a function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 *
 * @s1: string to check
 * @s2: string to compare
 *
 * Return: 1 if the same, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
		{
			if (*(s2 + 1) != '*' && *(s2 + 1) != '\0')
			{
			s1 = check(s1, ++s2);
			return (wildcmp(s1, s2));
			}
			else if (*(s2 + 1) == '\0')
			return (1);
			else
			return (wildcmp(s1, ++s2));
		}
		else if (*s1 != *s2)
		return (0);
		return (wildcmp(++s1, ++s2));
	}
	
	if (*s1 == *s2)
	return (1);
	return (0);
}
