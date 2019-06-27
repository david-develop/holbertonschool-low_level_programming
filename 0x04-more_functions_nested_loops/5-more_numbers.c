#include "holberton.h"
/**
 * more_numbers - Prints the numbers to 14.
 *
 */

void more_numbers(void)
{
	int a, x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
	_putchar('\n');
	}
}
