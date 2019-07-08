#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input string.
 * @accept: character to be compared.
 * Return: pointer to string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *nu = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (nu);
}
