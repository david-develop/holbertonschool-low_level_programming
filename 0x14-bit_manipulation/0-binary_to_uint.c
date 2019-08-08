#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, e;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	e = 1;

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (i == (len - 1))
			e = 1;
		else
			e *= 2;
		res = res + ((b[i] - '0') * e);
	}
	return (res);
}
