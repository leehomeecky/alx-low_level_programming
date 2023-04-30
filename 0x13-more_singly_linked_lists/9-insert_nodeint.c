#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @head: head of the linked it
 * @idx: index to add the new node
 * @n: number to be added
 *
 * Return: address of new node || NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = (listint_t *)malloc(sizeof(listint_t));
	temp2 = *head;
	if (temp == NULL)
	return (NULL);
	temp->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
	if (temp2 == NULL)
	{
	free(temp);
	return (NULL);
	}
	temp2 = temp2->next;
	}
	temp->next = temp2->next;
	temp2->next = temp;
	return (temp);
}
