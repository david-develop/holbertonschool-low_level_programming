#include "function_pointers.h"
/**
 * array_iteratior - executes a function given as a parameter on each element of an array.
 * @array: given array.
 * @size: size of the array.
 * @action: pointer to the function needed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
