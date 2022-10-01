#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers given as arguments
 *
 * @argc: int - number of arguements
 *
 * @argv: pointer to char pointer - array of string (arguments)
 *
 * Return:
 * If two numbers are given as argument, display result and
 * return O
 *
 * Otherwise, display `Error` and return -1
 */

int main(int argc, char **argv)
{
	int r;

	if (argc - 1 == 2)
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}

	printf("Error\n");
	return (1);

}
