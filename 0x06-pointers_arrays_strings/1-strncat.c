#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string where we want to append.
 * @src: the string from which n characters are going to append.
 * @n: maximum number of character to be appended.
 * Return: pointer to the dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, iter_n = 0;

	/*count first string*/
	while (dest[i] != '\0')
	{
		i++;
	}
	/*add second string to the first until n and only to the '\0'*/
	for (iter_n = 0; iter_n < n && src[iter_n] != '\0'; iter_n++)
	{
		dest[i] = src[iter_n];
		i++;
	}
	/* add '\0' at the end */
	dest[i] = '\0';
	return (&(*dest));
}
