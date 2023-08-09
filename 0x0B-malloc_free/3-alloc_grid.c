#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width:  number of rows
 *
 * @height: number of columns
 *
 * Return: a pointer to a dynamically allocated memory that contains
 * a 2 dimensional array initialized with 0.
 *
 * if malloc fails, returns NULL
 *
 * if width or height is 0, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (!width || !height)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (!ptr[i])
		{
			free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;


	return (ptr);

}
