#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if recive more than one argument, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int money, cas, count = 0;
	int coins [] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
		printf("0\n");
	else
	{
		for (cas = 0; cas < 5; cas++)
		{
			for (; money >= coins[cas]; count++)
			money -= coins[cas];
		}
		if (money == 0)
			printf("%d\n", count);
	}
	return (0);
}
