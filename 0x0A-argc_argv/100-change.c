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
	int money, coins, count = 0;

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
		for (coins = 25; money >= coins; count++)
			money -= coins;
		for (coins = 10; money >= coins; count++)
			money -= coins;
		for (coins = 5; money >= coins; count++)
			money -= coins;
		for (coins = 2; money >= coins; count++)
			money -= coins;
		for (coins = 1; money >= coins; count++)
			money -= coins;
		if (money == 0)
			printf("%d\n", count);
	}
	return (0);
}
