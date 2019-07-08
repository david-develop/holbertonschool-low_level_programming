#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to object.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *nu = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			nu = (s + i);
			break;
	}
	return (nu);
}
