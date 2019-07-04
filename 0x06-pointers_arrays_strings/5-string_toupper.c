#include "holberton.h"
/**
 * string_toupper - print the given string in reverse.
 * @s: given string.
 * Return: the string in upper.
 */
char *string_toupper(char *s)
{
	int iter;

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		if (s[iter] >= 'a' && s[iter] <= 'z')
		{
			s[iter] += 'A' - 'a';
		}
		else
			continue;
	}
	return (s);
}
