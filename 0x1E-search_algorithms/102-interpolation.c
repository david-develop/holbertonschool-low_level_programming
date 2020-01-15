#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	int flag = 0;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);
		flag = 1;

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return ((int) pos);
	}

	if (value == array[low])
	{
		printf("Value checked array[%d] = [%d]\n", (int) low, array[low]);
		return ((int) low);
	}
	if (flag == 0)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] is out of range\n", (int) pos);
	}
	return (-1);
}
