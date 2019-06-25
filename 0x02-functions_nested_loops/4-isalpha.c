#include "holberton.h"
/**
 * _isalpha - Verify if variable is a letter lowercase or uppercase.
 * @c: variable for value input.
 * Return: when is a letter return 1.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
