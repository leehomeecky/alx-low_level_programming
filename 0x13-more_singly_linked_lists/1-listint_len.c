#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
	temp = temp->next;
	i++;
	}
	return (i);

}
