#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input variable.
 */

void print_times_table(int n)
{
	int r, m, d, fd, td;

	if (n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (d = 0; d <= n; d++)
			{
				r = m * d;
				fd = (r / 10) % 10;
				if (r < 10)
				{
					if (!(d == 0))
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + r);
				}
				else if (r >= 10 && r < 100)
				{
					r = r % 10;
					_putchar(' ');
					_putchar('0' + fd);
					_putchar('0' + r);
				}
				else if (r >= 100)
				{
					td = r / 100;
					r = r % 10;
					_putchar('0' + td);
					_putchar('0' + fd);
					_putchar('0' + r);
				}
				if (!(d == n))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
