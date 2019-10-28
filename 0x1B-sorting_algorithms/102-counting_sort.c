#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order using the
 * Counting sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int large = 0, j, idx, num;
	int *index_arr, *aux_arr;
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (large < array[i])
			large = array[i];
	}
	index_arr = malloc((large + 1) * sizeof(int));
	if (index_arr == NULL)
		return;
	for (j = 0; j <= large; j++)
		index_arr[j] = 0;
	for (i = 0; i < size; i++)
	{
		idx = array[i];
		index_arr[idx] = index_arr[idx] + 1;
	}
	for (j = 1; j <= large; j++)
	{
		index_arr[j] += index_arr[j - 1];
		printf("%d, ", index_arr[j - 1]);
	}
	printf("%d\n", index_arr[j - 1]);
	aux_arr = malloc(size * sizeof(int));
	if (aux_arr == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		num = array[i];
		idx = index_arr[array[i]] - 1;
		index_arr[array[i]] -= 1;
		aux_arr[idx] = num;
	}
	for (i = 0; i < size; i++)
	{
		array[i] = aux_arr[i];
	}
	free(index_arr), free(aux_arr);
}
