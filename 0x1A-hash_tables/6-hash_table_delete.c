#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 *
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *head;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				temp = head;
				head = head->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}

		free(ht->array);
		free(ht);
	}
}
