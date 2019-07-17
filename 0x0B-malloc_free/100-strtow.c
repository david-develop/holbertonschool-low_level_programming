#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * cwords - count number of words in a given string.
 * @str: given string.
 * @l: lenght of string.
 * Return: number of words.
 */
int cwords(char *str, int l)
{
	int i, count_w;

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ')
		{
			for (; str[i] != ' '; i++)
				;
			count_w++;
		}
	}
	return (count_w);
}

/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: Pointer to array.
 */
char **strtow(char *str)
{
	char **p;
	int count_w = 0, count_c = 0, i, leng, x = 0, fr, j = 0, z = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (leng = 0; str[leng] != '\0'; leng++)
		;
	count_w = cwords(str, leng);
	p = malloc((count_w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < leng; i++)
	{
		if (str[i] != ' ')
		{z = 1;
			for (count_c = 0; str[i] != ' '; i++)
				count_c++;
			p[x] = malloc((count_c + 1) * sizeof(char));
			if (p[x] == NULL)
			{
				for (fr = 0; fr <= x; fr++)
					free(p[fr]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < count_c; j++)
				p[x][j] = str[(i - count_c) + j];
			p[x][j] = '\0';
			x++;
		}
	}
	if (z != 1)
		return (NULL);
	p[x] = NULL;
	return (p);
}
