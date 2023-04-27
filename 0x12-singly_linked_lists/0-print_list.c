#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0, len;
	char *str;

	temp = h;
	if (h == NULL)
	return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
		len = 0;
		str = "(nil)";
		}
		else
		{
		len = temp->len;
		str = temp->str;
		}
		printf("[%d] %s\n", len, str);
		temp = temp->next;
		i++;
	}
	return (i);
}
