#include "holberton.h"
/**
 * rev_string - print the given string in reverse.
 * @s: input string.
 *
 */
void rev_string(char *s)
{
	int i = 0, iter;
	char last_d, c;

	/*count the lenght of the string*/
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (iter = 0; iter < i; iter++)
	{
		c = s[iter];
		last_d = s[i - 1];
		s[iter] = last_d;
		s[i - 1] = c;
		i--;
	}
}
