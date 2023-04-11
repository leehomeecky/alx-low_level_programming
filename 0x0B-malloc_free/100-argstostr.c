#include <stdlib.h>
#include "main.h"

int str_len(char *str);
/**
 * str_len - a function to get the legnth of string
 *
 * @str: pointer to string to be counted
 *
 * Return: string length
 */


int str_len(char *str)
{
	if (*str == '\0')
	return (0);
	return (1 + str_len(++str));
}


/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: number of argument.
 * @av: array of arguments.
 *
 * Return: pointer to concatinated string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *space;
	int i, j, k = 0, size = 0;

	if (ac > 0)
	{
	for (i = 0; i < ac; i++)
	size += str_len(av[i]);
	space = (char *)malloc((size + ac) * sizeof(char));
	if (space != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < str_len(av[i]); j++)
			{
			space[k] = av[i][j];
			k++;
			}
			space[k] = '\n';
			k++;
		}
		return (space);
	}
	}
	return ('\0');
}
