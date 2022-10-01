#include <stdio.h>

/**
 * main - prints all argument it receives
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
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
