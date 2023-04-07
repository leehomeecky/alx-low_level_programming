#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: amount of arguments, pased to the function
 * @argv: argument wariable
 *
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int value[] = {25, 10, 5, 2, 1};
	int coins = 0, i, amount;

	if (argc != 2)
	{
	printf("%s\n", "Error");
	return (1);
	}

	amount = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (amount > 0)
		{
			while (value[i] <= amount)
			{
				coins++;
				amount -= value[i];
			}
		}
	}
	printf("%i\n", coins);
	return (0);
}
