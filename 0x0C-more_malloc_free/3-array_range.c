#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: lowest value
 *
 * @max: greatest value
 *
 * Description: The array created should contain all the values from
 * min (included) to max(included), ordered from min to max
 *
 * Return: a pointer to the newly created array
 *
 * If min > max return NULL
 * In failure return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, k;

	if ((min > max) || (!min && !max))
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
		return (NULL);

	for (i = min, k = 0; i <= max; i++, k++)
		ptr[k] = i;

	return (ptr);
}
