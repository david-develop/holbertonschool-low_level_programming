#include "search_algos.h"
#include <math.h>

/**
 * linear_mod - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @start: initial index
 * @end: final index
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */

int linear_mod(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = start; i <= end; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
			return ((int)i);
		}
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
	}
	return (-1);
}

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, block_s;

	block_s = sqrt(size);

	for (start = 0, end = block_s; end < size; end += block_s)
	{
		start = end - block_s;

		if (array[start] > value && start == 0)
		{
			printf("Value checked array[%zu] = [%d]\n", start, array[start]);
			return (-1);
		}
		else if (array[end] >= value)
		{
			printf("Value checked array[%zu] = [%d]\n", start, array[start]);
			break;
		}
		else
			printf("Value checked array[%zu] = [%d]\n", start, array[start]);
	}

	if (end >= size)
	{
		start = end - block_s;
		printf("Value checked array[%zu] = [%d]\n", start, array[start]);
		printf("Value found between indexes [%zu] and [%zu]\n", start,
		       start + block_s);
		return (linear_mod(array, start, size - 1, value));
	}

	printf("Value found between indexes [%zu] and [%zu]\n", start,
	       start + block_s);
	return (linear_mod(array, start, end, value));
}
