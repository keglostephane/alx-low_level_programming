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
	unsigned long int i;

	(void) i;
	if (!size)
		return (NULL);

	hash_map = malloc(sizeof(hash_table_t));

	if (!hash_map)
		return (NULL);

	hash_map->array = malloc(sizeof(hash_node_t *) * size);

	if (!(hash_map->array))
	{
		free(hash_map);
		return (NULL);
	}

	hash_map->size = size;
	hash_map->array = NULL;

	return (hash_map);
}
