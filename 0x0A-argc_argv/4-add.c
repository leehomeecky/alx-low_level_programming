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
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc < 2)
	{
	printf("%i\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		if (!isdigit(*argv[i]))
		{
		printf("%s\n", "Error");
		return (1);
		}

		j += atoi(argv[i]);
		}
		printf("%i\n", j);
	}
	return (0);
}
