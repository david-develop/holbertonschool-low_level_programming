#include "search_algos.h"
/**
 * print_arr - function that print array
 * @array: a pointer to the first element of the complete array
 * @left: firts index of subarray
 * @right: last index of subarray
 */
void print_arr(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left < right; left++)
	{
		printf("%d, ", array[left]);
	}
	printf("%d\n", array[left]);
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left < size)
	{
		print_arr(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return ((int)middle);
	}
	return (-1);
}
