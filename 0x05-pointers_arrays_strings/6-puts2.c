#include "holberton.h"
/**
 * puts2 - print one char out of two.
 * @str: input string.
 *
 */
void puts2(char *str)
{
	int i = 0;

	/*count the lenght of the string*/
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
