#include <stdio.h>

/**
 * main - prints its name followed by a new line
 *
 * @argc: int - number of arguments
 *
 * @argv : pointer to char pointer - array of string (arguments)
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
