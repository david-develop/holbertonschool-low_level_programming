#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: input string.
 * @n: number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int posi;

	for (posi = 0; posi < n; posi++)
	{
		printf("%d", a[posi]);
		if (posi != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
