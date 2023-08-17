#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of the division of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the quotient of the division of a by b
 *
 * b should be not equal to zero
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
