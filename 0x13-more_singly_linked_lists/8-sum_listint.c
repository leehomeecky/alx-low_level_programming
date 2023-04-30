#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: head of the linked it
 *
 * Return: sunm of all data || 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return (0);
	return (temp->n + sum_listint(temp->next));
}
