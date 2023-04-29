#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list.
 *
 * @head: head of the linked it
 * @n: number to add to the begining of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
