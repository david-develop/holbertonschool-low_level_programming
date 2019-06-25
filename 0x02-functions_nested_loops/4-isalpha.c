#include "holberton.h"
/**
 * _isalpha - Verify if variable is a letter lowercase or uppercase.
 *
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
