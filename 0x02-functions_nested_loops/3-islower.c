#include "holberton.h"
/**
 * _islower - Verify if the letter is lowercase.
 *
 *Returns 1 when lowercase and 0 otherwise
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
