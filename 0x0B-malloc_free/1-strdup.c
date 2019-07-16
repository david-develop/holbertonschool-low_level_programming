#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - create new space in memory that contains cpy of a given string
 * @str: given string.
 * Return: Pointer to allocated memory.
 */
char *_strdup(char *str)
{
	char *cpy_ar;
	unsigned int i, cp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	cpy_ar = malloc((i + 1) * sizeof(char));

	if (cpy_ar == NULL)
		return (NULL);

	for (cp = 0; cp <= i; cp++)
	{
		cpy_ar[cp] = str[cp];
	}

	return (cpy_ar);
}
