#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: a pointer to the head of the dlistint_t list.
 * @n: the integer for the new node to contain.
 *
 * Return: the address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp1, *temp2;

	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;
	if (*head == NULL)
	{
		temp1->prev = NULL;
		*head = temp1;
		return (temp1);
	}
	temp2 = *head;
	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp1;
	temp1->prev = temp2;
	return (temp1);
}
