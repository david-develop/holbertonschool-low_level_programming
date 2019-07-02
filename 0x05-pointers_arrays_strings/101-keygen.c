#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generation of password.
 *
 *
 * Return: always 0.
 */

int main(void)
{
	int num = 2772, var = 0, sum = 0, ran;

	time_t t;

	srand((unsigned) time(&t));

	while (var < num)
	{
		ran = rand() % 128;
		var = var + ran;
		printf("%c", ran);
		sum = sum + ran;
	}
	printf("%c", (num - sum));
	return(0);
}
