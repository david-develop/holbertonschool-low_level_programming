#include "holberton.h"

/**
 * _strncpy - concatenate two strings
 * @dest: the string where we want to append.
 * @src: the string from which n characters are going to append.
 * @n: maximum number of character to be appended.
 * Return: pointer to the dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iter_n = 0;

	for (iter_n = 0; iter_n < n && src[iter_n] != '\0'; iter_n++)
	{
		dest[iter_n] = src[iter_n];
	}
	for (; iter_n < n; iter_n++)
	{
		dest[iter_n] = '\0';
	}
	/* add '\0' at the end */
	return (&(*dest));
}
