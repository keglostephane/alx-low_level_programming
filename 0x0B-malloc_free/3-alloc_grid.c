#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: int - numbers of columns of array
 *
 * @height: int - numbers of rows of array
 *
 * Return: On success, returns a pointer to a 2 dimensional array of integers
 *
 * on failure, returns `NULL`
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 1 || height <= 1)
		return (NULL);

	ptr = malloc(height * sizeof(int **));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (!ptr[i])
		{
			free(!ptr[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
