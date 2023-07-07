#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * 
 * @ht: A pointer to the hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
