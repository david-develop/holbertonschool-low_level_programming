#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: pointer to the function that corresponds to the operator given.
 */

int main(int argc, char *argv[])
{
	int b;

	b = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
