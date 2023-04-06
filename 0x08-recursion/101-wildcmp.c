#include "main.h"

int len_str(char *s, int len);
int last_wild(char *s, int p, int i);
int check(char *s1, char *s, int ls1, int ls2, int p, int i, int j);
int wildcmp(char *s1, char *s2);

/**
 * len_str - find the lenght of the string
 *
 * @s: string to count
 * @len: length counter
 *
 * Return: @len
 */

int len_str(char *s, int len)
{
	if (*s != '\0')
	return (len_str(++s, ++len));
	return (len);
}


/**
 * last_wild - Searches for the last wild character position
 *
 * @s: string to search
 * @p: position of wild character counter
 * @i: counter
 *
 * Return: p
 */

int last_wild(char *s, int p, int i)
{
	if (*s != '\0')
	{
		if (*s == '*')
		p = i + 1;
		return (last_wild(++s, p, ++i));

	}
	return (p);
}

/**
 * check - Search trough to find the first occurence of a char
 *
 * @s1: char to be searched through
 * @s2: char to mach
 * @ls1: length of sring 1
 * @ls2: length of sring 1
 * @p: position of last wild character
 * @i: sl counter
 * @j: s2 counter
 *
 * Return: the pointer to march else 0
 */

int check(char *s1, char *s2, int ls1, int ls2, int p, int i, int j)
{
	if (ls1 == 0)
	ls1 = len_str(s1, ls1);
	if (ls2 == 0)
	ls2 = len_str(s2, ls2);
	if (p == -1)
	p = last_wild(s2, 0, 0);

	if (p == ls2)
	return (1);
	if (p > 0)
	{
	if (i == 0)
	i = ls1 - (ls2 - p);
	if (j == 0)
	j = p;
	}

	if ((ls1 - i) != (ls2 - j))
	return (0);

	if (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		return (0);
		return (check(s1, s2, ls1, ls2, p, ++i, ++j));
	}
	return (1);
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
	return (check(s1, s2, 0, 0, -1, 0, 0));
}
