#include <stdio.h>
#include <stdlib.h>
/**
 * main - program thar print the multiplication result of two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if program doesn't recive two arguments, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
