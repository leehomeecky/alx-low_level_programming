#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: amount of arguments, pased to the function
 * @argv: argument wariable
 *
 * Return: 0 if success else 1
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
