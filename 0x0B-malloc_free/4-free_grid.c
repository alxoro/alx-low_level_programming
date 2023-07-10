#include <stdlib.h>

/**
 * free_grid - it frees a two dimensional grid created previously
 * that was created by the alloc_grid funtion
 * @grid: double the pointer to multi-dimen array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
