#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	i++;
	}
	return (i);

}
