#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string input to be changed.
 * @src: string to be added.
 * Return: pointer to the dest string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/*count first string*/
	while (dest[i] != '\0')
	{
		i++;
	}
	/*add second string to the first*/
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* add '\0' at the end */
	dest[i] = '\0';
	return (&(*dest));
}
