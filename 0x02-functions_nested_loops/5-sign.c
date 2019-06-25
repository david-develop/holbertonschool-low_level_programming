#include "holberton.h"
/**
 * _isalpha - Verify if variable is a letter lowercase or uppercase.
 *
 *Returns 1 when lowercase and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
