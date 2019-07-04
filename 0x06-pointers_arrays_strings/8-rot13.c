#include "holberton.h"
/**
 * rot13 - encode the string to leet.
 * @s: given string.
 * Return: the string encoded.
 */
char *rot13(char *s)
{
	int iter, i;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[iter] == a[i])
			{
				s[iter] = n[i];
				break;
			}
		}
	}
	return (s);
}
