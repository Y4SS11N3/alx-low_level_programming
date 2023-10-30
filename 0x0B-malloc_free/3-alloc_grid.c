#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to 2D array or NULL if error.
 */
int **alloc_grid(int width, int height)
{
	int **out_grid;
	int idx, jdx;

	if (width < 1 || height < 1)
		return (NULL);

	out_grid = malloc(height * sizeof(int *));
	if (out_grid == NULL)
	{
		free(out_grid);
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		out_grid[idx] = malloc(width * sizeof(int));
		if (out_grid[idx] == NULL)
		{
			for (idx--; idx >= 0; idx--)
				free(out_grid[idx]);
			free(out_grid);
			return (NULL);
		}
	}

	for (idx = 0; idx < height; idx++)
		for (jdx = 0; jdx < width; jdx++)
			out_grid[idx][jdx] = 0;

	return (out_grid);
}
