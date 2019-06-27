#include "holberton.h"
/**
 * _isupper - Verify if the letter is uppercase.
 * @c: variable for input value.
 * Return: 1 when input is a uppercase letter.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
