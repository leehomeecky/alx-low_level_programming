#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @h: head of the linked list
 */

void free_list(list_t *head)
{
	const list_t *temp, *temp2;

	temp = head;
	if (h == NULL)
	return;
	while (temp != NULL)
	{
		temp2 = temp->next;
		if (temp->str != NULL)
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
