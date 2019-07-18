#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates one string to another at n bytes.
 * @s1: input string 1.
 * @s2: input string 2.
 * @n: n bytes to be cated.
 * Return: Pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cated_string = NULL;
	unsigned int i, j, iter_n, total_l, p;

	i = 0;
	iter_n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*count first and second string*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	/*condition if n > a lenght of s2*/
	if (n >= j)
		total_l = i + j;
	else if (n < j)
		total_l = i + n;

	cated_string = malloc(sizeof(char) * (total_l + 1));
	if (cated_string == NULL)
		return (NULL);

	/*add second string to the first until n and only to the '\0'*/
	for (iter_n = 0, p = 0; iter_n < total_l; iter_n++)
	{
		if (iter_n < i)
			cated_string[iter_n] = s1[iter_n];
		else if (iter_n >= i && s2[p] != '\0')
		{
			cated_string[iter_n] = s2[p];
			p++;
		}
	}
	/* add '\0' at the end */
	cated_string[iter_n] = '\0';
	return (cated_string);
}
