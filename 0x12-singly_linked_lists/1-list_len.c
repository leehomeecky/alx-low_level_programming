#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	if (h == NULL)
	return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
