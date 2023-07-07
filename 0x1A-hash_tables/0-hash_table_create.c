#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: pointer to the new hash table || NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp;
	unsigned long int i;

	temp = malloc(sizeof(hash_table_t));
	if (temp == NULL)
		return (NULL);

	temp->size = size;
	temp->array = malloc(sizeof(hash_node_t *) * size);
	if (temp->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		temp->array[i] = NULL;

	return (temp);
}
