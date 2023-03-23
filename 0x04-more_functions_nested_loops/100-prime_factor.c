#include <stdio.h>

/**
  * main - Entry point
  *
  * a program that finds and prints the largest prime factor of the number
  * 612852475143, followed by a new line.
  *
  * Return: 0 if success
  */

int main(void)
{
	int i;
	long int n;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while ((n % i) == 0)
		{
			if (i == n)
			{
			printf("%d\n", i);
			return (0);
			}
			else
			{
			n /= i;
			}
		}
	}

	return (0);
}
