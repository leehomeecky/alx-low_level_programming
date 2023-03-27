#include "main.h"

/**
  * swap_int - a function that swaps the values of two integers.
  *
  * @a: integer 1 to be swaped
  * @b: integer 2 to be swaped
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
