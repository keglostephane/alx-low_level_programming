#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int found = 0;	/* detect if a key/value has been found */

	if (ht)
	{
		printf("{");
		for (i = 0;  i < ht->size; i++)
		{
			head = ht->array[i];

			while (head)
			{
				if (found)
					printf(", ");
				printf("\'%s\': \'%s\'", head->key, head->value);
				found = 1;
				head = head->next;
			}
		}
		printf("}\n");
	}
}
