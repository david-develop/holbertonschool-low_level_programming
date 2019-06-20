#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", n);
		printf("%s\n", " is positive");
	}
	else if (n == 0)
	{
		printf("%d", n);
		printf("%s\n", " is zero");
	}
	else
	{
		printf("%d", n);
		printf("%s\n", " is negative");
	}
	return (0);
}
