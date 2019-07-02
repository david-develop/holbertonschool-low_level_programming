#include "holberton.h"
/**
 * _atoi - function that convert to integrer.
 * @s: input string.
 *
 * Return: integrer.
 */
int _atoi(char *s)
{
	int res = 0, sing = 1, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		if (s[i] == '-')
		{
			sing = -sing;
		}
	}
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
	return (sing * res);
}
