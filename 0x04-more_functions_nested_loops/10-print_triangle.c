#include "holberton.h"
/**
 * print_triangle - Prints a triangle from the size value.
 * @size: is the size of the triangle, defined the by input.
 */

void print_triangle(int size)
{
	char a = 35, x, y, z, w;

	if (size > 0)
	{
		for (y = size; y > 0; y--)
		{
			for (x = 0; x < (y - 1); x++)
			{
				_putchar(' ');
			}
			w = size - x;
			for (z = 0; z <= (w - 1); z++)
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
