#include "holberton.h"
/**
 * _strlen_recursion - function that return the lenght of a string.
 * @s: input string.
 * Return: counter plus recursion.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
