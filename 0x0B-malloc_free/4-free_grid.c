#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Releases a 2D grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
