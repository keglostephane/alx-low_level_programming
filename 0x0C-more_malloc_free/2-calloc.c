#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 *
 * @nmemb: unsigned int - number of elements of the array
 *
 * @size: unsigned int - size in bytes of each element
 *
 * Return: a pointer to the allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * sizeof(size));

	if (!str)
		return (NULL);

	while (i < nmemb)
	{
		str[i] = 0;
		i++;
	}

	return (str);
}
