#include "holberton.h"
/**
 * _islower - Verify if the letter is lowercase.
 *
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
