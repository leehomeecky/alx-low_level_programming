#include <stdio.h>

/**
 * main - Entry point
 *
 * Code to output a-zA-Z to the console
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	};

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	};

	putchar('\n');

	return (0);
}
