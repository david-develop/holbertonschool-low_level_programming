#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: address to the given number.
 * @index: binary index.
 * Return: 1 if worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int a = 1;
	unsigned int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);
	*n = (a << index | *n);
	return (1);
}
