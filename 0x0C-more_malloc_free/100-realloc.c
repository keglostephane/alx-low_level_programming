#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with malloc
 *
 * @old_size: memory size in bytes previously allocated by malloc
 *
 * @new_size: new memory size in bytes to allocate
 *
 * Return: a pointer to the beginning of the newly allocated memory
 *
 * If new_size > old_size, the added memory should not be initialized
 *
 * If new_size == old_size do not do anything and return ptr
 *
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 *
 * If new_size == 0 and ptr is not NULL, then the call is equivalent to
 * free(ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (!ptr)
	{
		ptr = malloc(new_size);

		if (!ptr)
			return (NULL);

		return (ptr);
	}

	else
	{
		if (!new_size)
		{
			free(ptr);
			return (NULL);
		}

		if (new_size == old_size)
			return (ptr);
	}

	nptr = malloc(new_size);

	if (!nptr)
		return (NULL);

	for (i = 0; i < old_size; i++)
		nptr[i] = ((char *)ptr)[i];

	free(ptr);

	return (nptr);
}
