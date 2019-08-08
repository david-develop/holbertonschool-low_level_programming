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
	unsigned long int p;

	for (i = 0; i < 64; i++)
	{
		p = ((a << (63 - i)) & n);
		if (p >> (63 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (63 - i);
			_putchar(b + 48);
		}
	}
	if (!flag)
	{
		_putchar('0');
	}
}
