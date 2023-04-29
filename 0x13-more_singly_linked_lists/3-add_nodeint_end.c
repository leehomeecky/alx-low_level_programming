#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list.
 *
 * @head: head of the linked it
 * @n: number to add to the begining of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp2 = *head;

	if (temp == NULL)
	return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
	temp->next = *head;
	*head = temp;
	}
	else
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp->next = temp2->next;
		temp2->next = temp;
	}
	return (temp);
}
