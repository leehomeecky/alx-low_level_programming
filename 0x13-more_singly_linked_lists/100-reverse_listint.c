#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head: head of the linked it
 *
 * Return: the pointer to the new head || NULL
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp2 = NULL;
	if (*head == NULL || head == NULL)
	return (NULL);
	while ((*head)->next != NULL)
	{
	temp = (*head)->next;
	(*head)->next = temp2;
	temp2 = *head;
	*head = temp;
	}
	(*head)->next = temp2;
	return (*head);
}
