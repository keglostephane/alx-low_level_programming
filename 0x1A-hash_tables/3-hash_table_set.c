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
	unsigned long int i;
	hash_node_t *head, *node;

	if (!key)
		return (1);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	head = ht->array[i];
	node->key = (char *)key;
	node->value = strdup(value);

	if (!head)
		node->next = NULL;
	else
		node->next = head;

	head = node;
	return (1);
}
