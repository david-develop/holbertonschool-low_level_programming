#include "holberton.h"
/**
 * cap_string - print the given string in reverse.
 * @s: given string.
 * Return: the string in upper.
 */
char *cap_string(char *s)
{
	int iter, i;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		for (i = 0; i < 13; i++)
		{
			if ((s[iter] == a[i]) && (s[iter + 1] >= 'a' && s[iter + 1] <= 'z'))
				s[iter + 1] += 'A' - 'a';
			else
				continue;
		}
	}
	return (s);
}
