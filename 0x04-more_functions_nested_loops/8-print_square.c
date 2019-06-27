#include "holberton.h"
/**
 * print_square - Prints diagonal at the n value.
 * @size: variable for the size of the square, defined by the input value.
 */

void print_square(int size)
{
	char a = 35, x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(a);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
