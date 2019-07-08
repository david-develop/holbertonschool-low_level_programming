#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: input string.
 * @accept: character to be compared.
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, count = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (count == 0)
			return (i);
	}
	return (i);
}
