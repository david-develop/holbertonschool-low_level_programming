#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to object.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (/*i = 0; s[i] != '\0'; */; ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
