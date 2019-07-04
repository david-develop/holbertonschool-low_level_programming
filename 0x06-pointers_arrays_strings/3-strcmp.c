#include "holberton.h"
/**
 * _strcmp - compare the strings
 * @s1: the firts input string.
 * @s2: the second input string.
 * Return: if strings are the same 0, if not the difference between both.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
