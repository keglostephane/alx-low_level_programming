#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - calculates minimum number of coins for an amount of money
 *
 * @amount: int - amount of money
 *
 * Description: coins of 25, 10, 5, 2, 1 cents are used.
 *
 * Return: minimum number of coins
 *
 */

int min_coins(int amount)
{
	int n;

	if (amount >= 25)
	{
		n = amount / 25;
		return (n + min_coins(amount % 25));
	}
	if (amount >= 10 && amount < 25)
	{
		n = amount / 10;
		return (n + min_coins(amount % 10));
	}
	if (amount >= 5 && amount < 10)
	{
		n = amount / 5;
		return (n + min_coins(amount % 5));
	}
	if (amount >= 2 && amount < 5)
	{
		n = amount / 2;
		return (n + min_coins(amount % 2));
	}
	if (amount == 1)
		return (1);

	return (0);
}


/**
 * main - prints the minimum number of coins an amount of money
 *
 * @argc: int - number of arguments
 *
 * @argv: pointer to char pointer - array of string (arguments)
 *
 * Description:
 *
 * prints the minimum number of coins to make change for an amount of money.
 * coins of 25, 10, 5, 2, 1 cents are used for money change.
 *
 * Return:
 *
 * Print minimum number of coins and return 0
 *
 * Print `Error` and return 1 if the number of arguments is not exactly 1
 *
 * Print 0 if the number passsed as the argument is negative
 *
 */

int main(int argc, char **argv)
{
	int n, amount;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			amount = atoi(argv[1]);
			n = min_coins(amount);
			printf("%d\n", n);
		}
	}

	return (0);
}
