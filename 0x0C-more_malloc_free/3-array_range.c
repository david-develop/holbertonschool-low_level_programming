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
	unsigned int i, rang_arr;

	if (min > max)
		return (NULL);

	if (min == 0)
		rang_arr = (unsigned int)max - (unsigned int)min + 1;
	else
		rang_arr = (unsigned int)max - (unsigned int)min;

	arr_i = malloc(sizeof(int) * (rang_arr));
	if (arr_i == NULL)
		return (NULL);
	for (i = 0; i < rang_arr && min < max; i++, min++)
	{
		arr_i[i] = min;
	}
	arr_i[i] = max;
	return (arr_i);
}
