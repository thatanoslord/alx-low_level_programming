#include "main.h"
/**
 * free_grid - frees a grid
 * @grid: 2 dimensional pointer
 * @height: y axis
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
