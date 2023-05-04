#include "main.h"

/**
 * clear_bit - a function that  sets the value of a bit to 0 at a given index.
 *
 * @n: value to convert to binary
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
