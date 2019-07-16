#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the matrix.
 * @height: height of the matrix.
 * Return: Pointer to a 2 dimensional array of integrers.
 */
int **alloc_grid(int width, int height)
{
	int **grid_a, *ptr;
	int i, j, len;

	len = sizeof(int *) * width + sizeof(int) * height * width;
	grid_a = (int **)malloc(len);

	ptr = (int *)(grid_a + width);
	for (i = 0; i < width; i++)
		grid_a[i] = (ptr + height * i);

	if (grid_a == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid_a[i][j] = 0;
	}
	return (grid_a);
}
