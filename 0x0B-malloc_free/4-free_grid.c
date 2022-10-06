#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 *
 * @grid: int pointer to pointer - address of two dimensional grid
 *
 * @height: int - number of rows of the grid
 *
 * Description: frees a two dimensional grid created previously
 * by `alloc_grid` function.
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
