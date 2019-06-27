#include "holberton.h"
/**
 * print_line - Prints the numbers to 14.
 * @n: variable to strore input value.
 */

void print_line(int n)
{
	char a = '_', iter;

	for (iter = 0; iter <= n; iter++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
