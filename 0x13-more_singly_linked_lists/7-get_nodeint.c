#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: head of the linked it
 * @index: index of node to be retured
 *
 * Return: node at index || NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
	if (temp == NULL)
	return (NULL);
	temp = temp->next;
	}
	return (temp);
}
