#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created.
 * @grid: input matrix.
 * @height: height of the matrix.
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = height; k >= 0; k--)
	{
		free(grid[k]);
	}
	free(grid);
}
