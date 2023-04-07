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
	if (argc < 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
