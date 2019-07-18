#include "holberton.h"
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
	int mul, i, array_i;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (array_i = 0; argv[i][array_i] != '\0'; array_i++)
			{
				if (!isdigit(argv[i][array_i]))
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
