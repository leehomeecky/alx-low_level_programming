#include <stdio.h>

/**
 * main - Entry point
 *
 * Code to output a-z to the console
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	};

	putchar('\n');

	return (0);
}
