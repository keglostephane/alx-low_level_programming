#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key
 *
 * @ht: hash table to retrieve the value from.
 *
 * @key: the key to look for.
 *
 * Return: the value associated with the node, or NULL if @key couldn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long index;
	hash_node_t *node;

	if (!key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);

}
