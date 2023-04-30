#include "lists.h"

/**
 * delete_nodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @head: head of the linked it
 * @index: index of node to delete
 *
 * Return: 1 if success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;
	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
		if (temp->next == NULL)
		return (-1);
		temp = temp->next;
		}
		temp2 = temp->next;
		temp = temp2->next;
		free(temp2);
	}
	return (1);
}
