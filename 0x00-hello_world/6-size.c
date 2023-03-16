#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a;
	long long int b;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
