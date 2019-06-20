#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, a, b;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = x; z <= '9'; z++)
			{
				if (z == y)
				{
					b = y + 1;
				}
				else
				{
					b = '0';
				}
				for (a = b; a <= '9'; a++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(a);
					if (!(x == '9' && y == '8' && z == '9' && a == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
