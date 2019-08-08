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
	unsigned int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);
	if (*n == 0)
		return (1);
	*n = (a << index ^ *n);
	return (1);
}
