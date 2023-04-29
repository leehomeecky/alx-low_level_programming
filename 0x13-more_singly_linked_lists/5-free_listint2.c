#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: head of the linked it
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2 = *head;

	if (*head != NULL)
	{
		while (temp2 != NULL)
		{
		temp = temp2->next;
		free(temp2);
		temp2 = temp;
		}
		*head = temp2;
	}
}
