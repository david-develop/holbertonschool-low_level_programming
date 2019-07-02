#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed.
 * @dest: pointed destiny.
 * @src: input string.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *ini_s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* add '\0' at the end */
	*dest = '\0';
	return (ini_s);
}
