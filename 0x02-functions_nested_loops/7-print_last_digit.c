#include "holberton.h"
/**
 * print_last_digit - return the last digit of a number
 * @n: variable for input value and recursive when last digit.
 * Return: the las digit.
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
