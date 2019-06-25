#include "holberton.h"
/**
 * _isalpha - Verify if variable is a letter lowercase or uppercase.
 *
 *Returns 1 when lowercase and 0 otherwise
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
