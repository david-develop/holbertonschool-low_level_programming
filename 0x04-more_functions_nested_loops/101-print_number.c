#include "holberton.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int dig = 0, tend = 1, iter = 1, abs = n, numch, num;

	if (n < 0)
	{
		_putchar('-');
		abs = -n;
	}
	else
	{
		abs = n;
	}
	num = abs;

	while (num > 0)
	{
		num /= 10;
		dig++;
	}
	while (iter < dig)
	{
		tend *= 10;
		iter++;
	}
	while (tend >= 1)
	{
		numch = (abs / tend) % 10;
		_putchar(numch + '0');
		tend /= 10;
	}
}
