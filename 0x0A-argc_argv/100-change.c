#include <stdio.h>
#include <stdlib.h>

/**
 * change_cent - returns the mininum number of coins to make change for
 * an amount of money.
 *
 * @c: amount of money
 *
 * Return: minimum number of coins to give
 *
 * coins values are 25, 10, 5, 2 and 1 cent
 */
int change_cent(int c)
{
	if (c >= 25)
		return (c / 25 + change_cent(c % 25));

	if (c >= 10)
		return (c / 10  + change_cent(c % 10));

	if (c >= 5)
		return (c / 5 + change_cent(c % 5));

	if (c >= 2)
		return (c / 2 + change_cent(c % 2));

	if (c == 1)
		return (1);

	return (0);
}

/**
 * main - Entry point
 *
 * @argc: number of arguments
 *
 * @argv: list of arguments
 *
 * Return: 0 in success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");

	else
	{
		n = change_cent(atoi(argv[1]));
		printf("%d\n", n);
	}

	return (0);
}
