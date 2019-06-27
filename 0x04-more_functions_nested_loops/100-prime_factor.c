#include <stdio.h>
/**
 * main - Prints the largest prime number of 612852475143.
 *
 * Return: always 0.
 */


int main(void)
{
	long int num, i;

	num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
