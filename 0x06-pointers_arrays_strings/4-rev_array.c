#include "holberton.h"
/**
 * reverse_array - print the given string in reverse.
 * @a: input array.
 * @n: number of arrays.
 */
void reverse_array(int *a, int n)
{
	int iter, last_i, in;

	for (iter = 0; iter < n; iter++)
	{
		in = a[iter];
		last_i = a[n - 1];
		a[iter] = last_i;
		a[n - 1] = in;
		n--;
	}
}
