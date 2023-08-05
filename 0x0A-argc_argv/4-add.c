#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 *
 * @argc: number of arguments
 *
 * @argv: list of arguments
 *
 * Return: O in Success, 1 if one of the number contains symbols
 * that are not digits
 *
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (strtol(argv[i], NULL, 10))
			sum += strtol(argv[i], NULL, 10);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
