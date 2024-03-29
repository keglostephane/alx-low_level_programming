#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes of memory to allocate
 *
 * Return: a pointer to the allocated memory
 *
 * If malloc fails, cause normal process termination with
 * a status value of 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
