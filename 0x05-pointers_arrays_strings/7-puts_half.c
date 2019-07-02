#include "holberton.h"
/**
 * puts_half - print only half of string.
 * @str: input string.
 *
 */
void puts_half(char *str)
{
	int leng = 0, h;

	/*count the lenght of the string*/
	while (*(str + leng) != '\0')
	{
		leng++;
	}
	if (leng % 2 == 0)
	{
		h = leng / 2;
		while (*(str + h) != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	else
	{
		h = (leng + 1) / 2;
		while (*(str + h) != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	_putchar('\n');
}
