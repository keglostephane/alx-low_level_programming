#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table.
 *
 * @size: size of the hash table
 *
 * Return: a pointer to the sorted hash table created
 *
 * In failure, return NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_map;
	unsigned long int i;

	if (!size)
		return (NULL);

	hash_map = malloc(sizeof(shash_table_t));
	if (!hash_map)
		return (NULL);

	hash_map->size = size;
	hash_map->array = malloc(sizeof(shash_node_t *) * size);
	if (!hash_map->array)
	{
		free(hash_map);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_map->array[i] = NULL;

	hash_map->shead = NULL;
	hash_map->stail = NULL;

	return (hash_map);
}

/**
 * insert_slist - insert a node in a sorted linked list of a hash table
 *
 * @ht: the hash table
 *
 * @current: current node in the linked list
 *
 * @node: node to insert in the linked list
 *
 */
void insert_slist(shash_table_t *ht, shash_node_t *current, shash_node_t *node)
{
	/*
	 * there is only one node is the hash table, so head and tail
	 * of the sorted list points to the same node
	 */
	if (!ht->shead)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	/* insert a new node before an existing node */
	else if (ht->shead && current)
	{
		node->snext = current;
		node->sprev = current->sprev;
		/* after the head */
		if (current->sprev)
			current->sprev->snext = node;
		/* before the head */
		else
			ht->shead = node;
		current->sprev = node;
	}
	/* insert a new node at the end of the sorted list */
	else if (ht->shead && !current)
	{
		ht->stail->snext = node;
		node->sprev = ht->stail;
		node->snext = NULL;
		ht->stail = node;
	}
}

/**
 * shash_table_set - add an element to the hash table.
 *
 * @ht: the hash table
 *
 * @key: element key, should not be empty
 *
 * @value: element value, can be empty
 *
 * Return: 1 in success, 0 in failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *head;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/* search for an existing key to update his value */
	for (head = ht->array[index]; head != NULL; head = head->next)
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
	/* create a new node and initialize some values */
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	/* insert the first node of the sorted list */
	if (!ht->shead)
		insert_slist(ht, ht->shead, node);
	else
	{
		for (head = ht->shead; head != NULL; head = head->snext)
			if (strcmp(node->key, head->key) < 0)
			{
				/* insert new node before an existing node */
				insert_slist(ht, head, node);
				break;
			}
		if (!head)
			/* insert new node after the tail of list */
			insert_slist(ht, head, node);
	}
	return (1);
}

/**
 * shash_table_get - retrieve a value associated with a key
 *
 * @ht: sorted hash table
 *
 * @key: the key used to retrieve the value
 * the key should be empty.
 *
 * Return: the value of the key, otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;

	if (!ht | !key | !*key)
		return (NULL);

	for (head = ht->shead; head != NULL; head = head->snext)
		if (strcmp(head->key, key) == 0)
			return (head->value);

	return (NULL);
}

/**
 * shash_table_print - print a sorted hash table
 *
 * @ht: hash table to print
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht)
	{
		printf("{");
		for (head = ht->shead; head != NULL; head = head->snext)
		{
			printf("\'%s\': \'%s\'", head->key, head->value);
			if (head->snext)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse
 *
 * @ht: hash table to print
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;

	if (ht)
	{
		printf("{");
		for (tail = ht->stail; tail != NULL; tail = tail->sprev)
		{
			printf("\'%s\': \'%s\'", tail->key, tail->value);
			if (tail->sprev)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - delete a sorted hash table
 *
 * @ht: hash table to delete
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *temp;

	if (ht)
	{
		for (head = ht->shead; head != NULL;)
		{
			temp = head;
			head = head->snext;
			free(temp->key);
			free(temp->value);
			free(temp);
		}

		free(ht->array);
		free(ht);
	}
}
