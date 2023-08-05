#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
