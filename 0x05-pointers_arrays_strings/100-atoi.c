#include "holberton.h"
/**
 * _atoi - function that convert to integrer.
 * @s: input string.
 *
 *
 * Return: integrer.
 */
int _atoi(char *s)
{
	unsigned int res = 0, sing = 1, i; /*initialize result and variables*/

	/*Iterate through first number and operate previous sings*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*stop when first number*/
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		if (s[i] == '-')
		{
			sing = -sing;
		}
	}
	/*iterate through all the strings until not number and operate*/
	for (int si = i; s[si] != '\0'; ++si)
	{
		if (s[si] >= '0' && s[si] <= '9')
		{
			res = res * 10 + s[si] - '0';
		}
		else
		{
			break;
		}
	}
	return (res * sing); /*return result and add the sing*/
}
