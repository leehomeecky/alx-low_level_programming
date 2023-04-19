#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: numbe of arguments pased
 * @argv: array of argument pased
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int (*i)(int, int);

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == "%" || argv[2] == "/") && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = get_op_func(argv[2]);
	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", i(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
