#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *temp1, *temp2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp1 = ht->array[i];
			while (temp1 != NULL)
			{
				temp2 = temp1->next;
				free(temp1->key);
				free(temp1->value);
				free(temp1);
				temp1 = temp2;
			}
		}
	}
	free(head->array);
	free(head);
}
