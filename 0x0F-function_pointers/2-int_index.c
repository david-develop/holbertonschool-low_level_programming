#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @cmp: pointer to the function to be used to compare values.
 * @size: number of elements in the array.
 * @array: input array.
 * Return: the index of the first element for which the cmp function does
 * not return 0. If no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(98);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return(-1);
}
