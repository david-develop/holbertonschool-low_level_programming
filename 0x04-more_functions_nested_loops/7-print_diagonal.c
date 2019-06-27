#include "holberton.h"
/**
 * print_diagonal - Prints diagonal at the n value.
 * @n: variable for input values.
 */

void print_diagonal(int n)
{
	char a = ' ', x, y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(a);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
