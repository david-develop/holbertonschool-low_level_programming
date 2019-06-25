#include "holberton.h"
/**
 * _islower - Verify if the letter is lowercase.
 * @c: variable for input value.
 * Return: when is a lower letter 1.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
