#include <stdlib.h>
#include <string.h>
#include "main.h"

int str_len(char *str);
int word_count(char *str);


/**
 * str_len - a function to get the legnth of string
 *
 * @str: pointer to string to be counted
 *
 * Return: string length
 */


int str_len(char *str)
{
	if (*str == '\0' || *str == ' ')
	return (0);
	return (1 + str_len(++str));
}


/**
 * word_count - counts the numbers of words in a sentence
 *
 * @str: sentence to be counted
 *
 * Return: numbers of words in @str
 */


int word_count(char *str)
{
	int count = 0;

	while (*str)
	{
	if (*str != ' ')
	{
	count++;
	str += str_len(str);
	}
	str++;
	}
	return (count);
}


/**
 * strtow - a function that splits a string into words.
 *
 * @str: String to be seperated
 *
 * Return: a pointer to a 2 dimensional array of strings or NULL
 */

char **strtow(char *str)
{
	int i, j, height, width;
	char **space;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	height = word_count(str);
	space = (char **)malloc((height + 1) * sizeof(char *));
	if (space == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		while (*str == ' ')
		str++;
		width = str_len(str);
		space[i] = (char *)malloc(width * sizeof(char));
		if (space[i] == NULL)
		{
		for (j = i - 1; j >= 0; j--)
		{
			free(space[j]);
		}
		free(space);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			space[i][j] = *str;
			str++;
		}
	}
	space[i] = (char *)malloc(sizeof(char));
	space[i][0] = '\0';
	return (space);
}
