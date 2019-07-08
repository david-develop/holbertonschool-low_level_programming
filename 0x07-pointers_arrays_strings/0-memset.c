#include "holberton.h"
/**
 * _memset - fill memory with a constant byte.
 * @s: staring address of memory to be filled.
 * @b: value to be filled.
 * @n: number of bytes to be filled.
 * Return: pointer to object.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
