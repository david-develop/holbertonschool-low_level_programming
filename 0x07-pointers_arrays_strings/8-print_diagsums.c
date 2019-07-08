#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: input matrix.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(i * size) + i];
	}
	for (i = (size - 1); i < ((size * size) - 1); i = i + (size - 1))
	{
		sum_2 += a[i];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
