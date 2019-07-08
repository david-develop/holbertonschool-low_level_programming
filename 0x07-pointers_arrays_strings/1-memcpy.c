#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: input direction in string.
 * @src: direction to be changed.
 *
 * Return: pointer to object.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
