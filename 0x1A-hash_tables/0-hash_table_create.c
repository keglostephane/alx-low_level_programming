#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the array
 *
 * Return: the newly created hash table
 * If somthing went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_map;

	if (!size)
		return (NULL);

	hash_map = malloc(sizeof(hash_table_t) +
			  sizeof(hash_node_t *) * size +
			  sizeof(hash_node_t) * size);

	if (!hash_map)
		return (NULL);

	return (hash_map);
}
