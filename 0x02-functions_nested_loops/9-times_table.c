#include "holberton.h"
/**
 * void times_table(void) - prints the 9 times table, starting with 0
 *
 *
 */

void times_table(void)
{
	int r, m, d, fd;

	for (m = 0; m <= 9; m++)
	{
		for (d = 0; d <= 9; d++)
		{
			r = m * d;
			if (r < 10)
			{
				if (!(d == 0))
				{
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			else if (r >= 10)
			{
				fd = (r / 10) % 10;
				r = r % 10;
				_putchar('0' + fd);
				_putchar('0' + r);
			}
			if (!(d == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
