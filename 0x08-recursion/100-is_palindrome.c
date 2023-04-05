#include "main.h"

int len_char(char *s, int c);
int check_for_palindrome(char *s, int i, int l);
int is_palindrome(char *s);

/**
 * len_char - check the length of the character
 *
 * @s: string to count
 * @c: is the counter
 *
 * Return: length of @s
 */

int len_char(char *s, int c)
{
	if (*s != '\0')
	return (len_char(++s, ++c));
	return (c);
}


/**
 * check_for_palindrome - checks if a string is a palindrome
 *
 * @s: the string to be checked
 * @i: pointer position
 * @l: length of the string
 *
 * Return: 1 if @s is a palindrome and 0 if not
 */

int check_for_palindrome(char *s, int i, int l)
{
	if (l == 0)
	l = len_char(s, l);
	if (i < l)
	{
		if (s[i] != s[(l - 1)])
		return (0);
		return (check_for_palindrome(s, ++i, --l));
	}
	return (1);
}


/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string to be checked
 *
 * Return: 1 if @s is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (check_for_palindrome(s, 0, 0));
}
