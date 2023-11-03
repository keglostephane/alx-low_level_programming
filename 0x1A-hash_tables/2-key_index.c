#include "hash_tables.h"

/**
 * key_index - Return the index of key in a hash table
 *
 * @key: string used to compute the index
 *
 * @size: size of the hash table
 *
 * Return: the index of @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	if (size)
		return (index % size);	/* valid index */

	return (index);	/* invalid index */
}
