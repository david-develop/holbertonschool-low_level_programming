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
	int i = 0, leng = 0, iter_n = 0;
	/*count the length of the given string*/
	while (src[leng] != '\0')
	{
		leng++;
	}
	/*add second string to the first until n and only to the '\0'*/
	if (n < leng)
	{
		for (iter_n = 0; iter_n < n && src[iter_n] != '\0'; iter_n++)
		{
			dest[i] = src[iter_n];
			i++;
		}
	}
	else
	{
		for (; iter_n < n && src[iter_n] != '\0'; iter_n++)
		{
			dest[i] = src[iter_n];
			i++;
		}
		for (; iter_n < 98 - 1; iter_n++)
		{
			dest[i] = '\0';
			i++;
		}
	}
	/* add '\0' at the end */
	return (&(*dest));
}
