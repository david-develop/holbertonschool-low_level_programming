#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: arguments counter.
 * @av: arguments vectors.
 * Return: Pointer to a new string, NULL if ac = 0 or av = 0 or fails malloc.
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, cp, final_leng;

	final_leng = 0;
	cp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		final_leng = final_leng + j;
	}
	new_str = malloc(final_leng + ac + 1 * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cp++)
			new_str[cp] = av[i][j];
		new_str[cp] = '\n';
		cp++;
	}

	return (new_str);
}
