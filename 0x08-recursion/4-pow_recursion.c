#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: input value.
 * Return: factorial of the value and -1 if n is negative number.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
