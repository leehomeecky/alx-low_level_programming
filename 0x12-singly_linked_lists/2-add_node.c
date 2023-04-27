#include "lists.h"

/**
 * str_len - function to count the length of string
 *
 * @s: string to be counted
 *
 * Return: length of string
 */
int str_len(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(++s));
}

/**
 * add_node - a function that adds a new node at the beginning of a list_t
 * list.
 *
 * @head: head of the linked list
 * @str: string to be added
 *
 * Return: pointer to newly created node || null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);
	if (str == NULL)
	{
	temp->str = NULL;
	temp->len = 0;
	}
	else
	{
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
	free(temp);
	return (NULL);
	}
	temp->len = (unsigned int) str_len(str);
	temp->next = *head;
	*head = temp;
	}
	return (temp);
}
