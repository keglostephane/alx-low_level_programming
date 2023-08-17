#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: the result of the operation performed on the integers
 * passed as arguemnts
 *
 * If the number of arguments is wrong, print Error and exit with status 98
 *
 * If operator is none of '+', '-', '*', '/', '%' print Error
 * and exit with status 99
 *
 * If the user tries to divide by 0, print Error and exit with the status 100
 */
int main(int argc, char **argv)
{
	int a, b;
	char *operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator) || *(operator + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = (get_op_func(operator))(a, b);

	printf("%d\n", result);

	return (result);
}
