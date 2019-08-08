#include "holberton.h"

/**
 * get_bit - prints the binary representation of a number.
 * @n: given number.
 * @index: binary index.
 * Return: 1 if worked.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a = 1;
	unsigned int size;
	unsigned long int p;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);
	p = (a << index & n);
	if (p)
		return (1);
	else
		return (0);
}
