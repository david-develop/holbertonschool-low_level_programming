#include "holberton.h"
/**
 * puts_half - print only half of string.
 * @str: input string.
 *
 */
void puts_half(char *str)
{
	int i = 0, h;

	/*count the lenght of the string*/
	while (*(str + i) != '\0')
	{
		h = i / 2;
		if (i < h)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
