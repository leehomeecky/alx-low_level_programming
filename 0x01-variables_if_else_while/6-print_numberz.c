#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int _;

	for (_ = 0; _ <= 9; _++)
	{
		putchar(_ + '0');
	};

	putchar('\n');

	return (0);
}
