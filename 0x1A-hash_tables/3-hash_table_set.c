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
	hash_node_t *head, *node;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	/* check for an existing key */
	while (head)
	{
		/* existing key found, update the value */
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	/* the key doesn't exists, create a new node with key */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	/*
	 * if no collision, node->next points to NULL,
	 * otherwise add the new node to beginning of the list
	 */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
