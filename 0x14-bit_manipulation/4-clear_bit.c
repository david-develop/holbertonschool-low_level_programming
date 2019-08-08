#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: address to the given number.
 * @index: binary index.
 * Return: 1 if worked, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = 1;
	unsigned int comp, size, i;
	unsigned long int p;

	size = sizeof(unsigned long int) * 8;
	if (*n == 0 || index > size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		p = ((a << ((size - 1) - i)) & *n);
		if (p)
		{
			comp = (size - 1) - i;
			if (comp < index)
			{
				return (-1);
			}
		}
	}
	*n = (a << index ^ *n);
	return (1);
}
