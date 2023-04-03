#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: pointer to the chessboard in an array format;
 */

void print_chessboard(char (*a)[8])
{
	int i;

	while (*a)
	{
		i = 0;
		while (i  < 8)
		{
		_putchar(*(*a + i));
		i++;
		}
		if (*(*(a + 1) + 1) != '\0')
		_putchar('\n');

		a++;
	}
}
