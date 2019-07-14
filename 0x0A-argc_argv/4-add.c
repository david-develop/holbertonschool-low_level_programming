#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program thar print the multiplication result of two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if program doesn't recive two arguments, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int i, array_i;
	int sum = 0;

	(void)argv;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (array_i = 0; argv[i][array_i] != '\0'; array_i++)
			{
				if (!isdigit(argv[i][array_i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
