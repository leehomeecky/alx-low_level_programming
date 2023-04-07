#include <stdio.h>
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
	if (*argv[0] > 0)
	printf("%i\n", argc - 1);
	return (0);
}
