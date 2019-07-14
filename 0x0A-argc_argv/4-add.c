#include <stdio.h>
#include <stdlib.h>
/**
 * main - program thar print the multiplication result of two numbers.
 * @c: input character to _isdigit function.
 * Return: 1 if program doesn't recive two arguments, otherwise 0.
 */

int _isdigit(int c);

int main(int argc, char *argv[])
{
	int i, array_i, in;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (array_i = 0; argv[i][array_i] != '\0'; array_i++)
		{
			if (!_isdigit(argv[i][array_i]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (in = 0; in < argc; in++)
		sum += atoi(argv[in]);
	printf("%d\n", sum);
	return (0);
}
/**
 * _isdigit - function that checks if arguments are digits.
 * @c: input character to _isdigit function.
 * Return: 1 if none a digit and 0 if is digit.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
