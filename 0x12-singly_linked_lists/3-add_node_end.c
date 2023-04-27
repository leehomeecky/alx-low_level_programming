#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * list.
 *
 * @head: head of the linked list
 * @str: string to be added
 *
 * Return: pointer to newly created node || null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;

	temp2 = *head;
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
	}

	if (*head == NULL)
	{
	temp->next = *head;
	*head = temp;
	}
	else
	{
	while (temp2->next != NULL)
	temp2 = temp2->next;
	temp->next = temp2->next;
	temp2->next = temp;
	}
	return (temp);
}
