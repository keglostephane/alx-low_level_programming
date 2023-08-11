#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements of the array
 *
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 *
 * If nmemb or size is 0 returns NULL
 * In failure, returns NULL
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = '\0';

	return (ptr);
}
