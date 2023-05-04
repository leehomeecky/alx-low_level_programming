#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: number to compare
 * @m: number to be compared with
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR, no_bit = 0;

	XOR = n ^ m;
	while (XOR > 0)
	{
	no_bit += (XOR & 1);
	XOR >>= 1;
	}
	return (no_bit);
}
