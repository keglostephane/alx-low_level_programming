#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * previously created by alloc_grid
 *
 * @grid: address of the 2 dimensional grid
 *
 * @height: height of the grid (row)
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
