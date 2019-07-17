#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: Pointer to array.
 */
char **strtow(char *str)
{
	char **p = NULL;
	int count_w, count_c;
	int i, leng, x, fr, j;

	count_w = 0;
	count_c = 0;
	x = 0;
	j = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (leng = 0; str[leng] != '\0'; leng++)
		;
	for (i = 0; i < leng; i++)
	{
		if (str[i] != ' ')
		{
			for (; str[i] != ' '; i++)
				;
			count_w++;
		}
	}
	p = malloc((count_w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < leng; i++)
	{
		if (str[i] != ' ')
		{
			for (count_c = 0; str[i] != ' '; i++)
				count_c++;
			p[x] = malloc((count_c + 1) * sizeof(char));
			if (p[x] == NULL)
			{
				for (fr = x; fr > 0; fr--)
				{
					free(p[fr]);
				}
				return (NULL);
			}
			for (j = 0; j < count_c; j++)
			{
				p[x][j] = str[(i - count_c) + j];
			}
			x++;
		}
		p[x] = NULL;
	}
	return (p);
}
