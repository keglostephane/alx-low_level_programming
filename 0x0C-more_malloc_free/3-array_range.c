#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: int - min value in array
 *
 * @max: int - max value in array
 *
 * Return: a pointer to an array of integers
 *
 * if min > max, return NULL
 *
 * if malloc fails return NULL
 *
 */

int *array_range(int min, int max)
{
	int i, j, *ptr;

	if (max < min)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));

	if (!ptr)
		return (NULL);

	i = 0;
	j = min;
	while (i < max - min + 1)
	{
		ptr[i] = j;
		j++;
		i++;
	}

	return (ptr);
}
