#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: given number.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int a = 1;
	int b, i;
	int size;
	unsigned long int p;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	size = sizeof(unsigned long int) * 8;
	for (i = 0; i < size; i++)
	{
		p = ((a << ((size - 1) - i)) & n);
		if (p >> ((size - 1) - i))
			flag = 1;
		if (flag)
		{
			b = p >> ((size - 1) - i);
			_putchar(b + 48);
		}
	}
}
