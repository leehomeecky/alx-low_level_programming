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
	listint_t *temp, *temp2, *temp3;

	temp = *head;
	temp2 = NULL;
	if (*head == NULL || head == NULL)
	return (NULL);
	while (temp)
	{
	temp3 = temp->next;
	temp->next = temp2;
	temp2 = temp;
	temp = temp3;
	}
	*head = temp;
	return (*head);
}
