#include "holberton.h"
/**
 * _isdigit - Verify if variable is a digit from 0 to 9
 * @c: variable for value input.
 * Return: when input is a digit return 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
