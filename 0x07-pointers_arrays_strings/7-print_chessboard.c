#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: pointer to the chessboard in an array format;
 */

void print_chessboard(char (*a)[8])
{
	int i;

	while (*(*a + 7))
	{
		i = 0;
		while (i  < 8)
		{
		_putchar(*(*a + i));
		i++;
		}
		_putchar('\n');

		a++;
	}
}
