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
 * binary_rec - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: first element index
 * @right: last element index
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_arr(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] < value)
			return (binary_rec(array, mid + 1, right, value));
		else if (array[mid] > value)
			return (binary_rec(array, left, mid - 1, value));
		if (array[mid - 1] == value)
			return (binary_rec(array, left, mid, value));
		else
			return ((int) mid);
	}
	return (-1);
}
/**
 * advanced_binary - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	return (binary_rec(array, left, right, value));
}
