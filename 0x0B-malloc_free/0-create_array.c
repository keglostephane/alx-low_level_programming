#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 *
 * @size:  size of the array
 *
 * @c: character to fill the array with
 *
 * Return: a dynamically allocated pointer to the array,
 * otherwise if malloc fails return NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(int) * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
