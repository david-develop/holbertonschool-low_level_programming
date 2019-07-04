#include "holberton.h"
/**
 * leet - encode the string to leet.
 * @s: given string.
 * Return: the string encoded.
 */
char *leet(char *s)
{
	int iter, i;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[iter] == a[i])
				s[iter] = n[i];
		}
	}
	return (s);
}
