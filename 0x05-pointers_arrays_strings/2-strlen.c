#include "holberton.h"
/**
 * _strlen - finds the length of a given string.
 * @s: input string.
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
