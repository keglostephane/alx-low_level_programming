#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: int - number of arguments
 *
 * @argv: pointer to char pointer - array of string (arguments)
 *
 * Return: 0 on success
 *
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
