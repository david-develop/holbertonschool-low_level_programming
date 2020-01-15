#include "search_algos.h"

/**
 * _min - function that find the minimun between two numbers
 * @a: number
 * @b: number
 * Return: minimun value
 */
size_t _min(size_t a, size_t b)
{
	size_t min;

	if (a < b)
		min = a;
	else
		min = b;
	return (min);
}
/**
 * print_arr_bin - function that print array
 * @array: a pointer to the first element of the complete array
 * @left: firts index of subarray
 * @right: last index of subarray
 */
void print_arr_bin(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left < right; left++)
	{
		printf("%d, ", array[left]);
	}
	printf("%d\n", array[left]);
}

/**
 * binary_search_exp - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * @left: first position to search in array
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */

int binary_search_exp(int *array, size_t left, size_t size, int value)
{
	size_t right, middle;

	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left < size)
	{
		print_arr_bin(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			return ((int) middle);
	}
	return (-1);
}

/**
 * exponential_search - function that searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int) bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int) (bound / 2),
	       (int) _min(bound, size - 1));
	return (binary_search_exp(array, (bound / 2), _min(bound + 1, size), value));
}
