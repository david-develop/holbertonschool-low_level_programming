#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimun value.
 * @max: max value.
 * Return: Pointer to allocated memory.
 */
int *array_range(int min, int max)
{
	int *arr_i = NULL;
	int i, rang_arr;

	if (min > max)
		return (NULL);

	rang_arr = max - min + 1;

	arr_i = malloc(sizeof(int) * (rang_arr));
	if (arr_i == NULL)
		return (NULL);
	for (i = 0; min < max; i++, min++)
	{
		arr_i[i] = min;
	}
	arr_i[i] = max;
	return (arr_i);
}
