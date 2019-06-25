#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints the natural numbers from n to 98
 * @n: input value.
 *
 */

void print_to_98(int n)
{
	int start;

	if (n <= 98)
	{
		for (start = n; start <= 98; start++)
		{
			if (!(start == 98))
			{
				printf("%d, ", start);
			}
			else if (start == 98)
			{
				printf("%d\n", start);
			}
		}
	}
	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			if (!(start == 98))
			{
				printf("%d, ", start);
			}
			else if (start == 98)
			{
				printf("%d\n", start);
			}
		}
	}
}
