#include "holberton.h"

/**
 * flip_bits - get number of bits you would need to flip to get from one number
 * to another.
 * @n: given number 1
 * @m: given number 2.
 * Return: number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, index, size, res;
	unsigned long int small, big, a, p, num1, num2;

	size = sizeof(unsigned long int) * 8;
	a = 1;
	if (n < m)
	{
		small = n;
		big = m;
	}
	else
	{
		small = m;
		big = n;
	}

	for (i = 0; i < size; i++)
	{
		p = (a << ((size - 1) - i) & big);
		if (p)
		{
			index = (size - 1) - i;
			break;
		}
	}
	for (res = 0; index >= 0; index--)
	{
		num1 = (a << index) & big;
		num2 = (a << index) & small;
		if (num1)
			num1 = 1;
		else
			num1 = 0;
		if (num2)
			num2 = 1;
		else
			num2 = 0;
		res += (num1 ^ num2);
	}
	return (res);
}
