#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: unsigned int - size of array
 *
 * @c: char c - specific char to fill array with
 *
 * Return: a pointer to the array of `NULL` if it fails
 *
 * If size = 0, return `NULL`
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = malloc(size * sizeof(*ptr));

	if (!ptr || size == 0)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
		ptr[i] = c;

	return (ptr);
}
