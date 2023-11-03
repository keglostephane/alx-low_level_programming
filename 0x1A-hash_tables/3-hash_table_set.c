#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table.
 *
 * @ht: hash table to add/update the key/value to
 *
 * @key: key used to compute the index in the hash table
 *
 * @value: value associated with @key
 *
 * Return: 1 in success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key || !value)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);

	if (!ht->array[index])
		node->next = NULL;
	else
	{
		/* check for an existing key */
		while (ht->array[index] && strcmp(ht->array[index]->key, key))
			ht->array[index] = ht->array[index]->next;

		/* update value of an existing key */
		if (ht->array[index])
		{
			ht->array[index]->value = strdup(value);
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		else
			/* collision detected, add to the beginning */
			node->next = ht->array[index];
	}

	ht->array[index] = node;
	return (1);
}
