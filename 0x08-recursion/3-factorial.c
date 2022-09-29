#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: int - number
 *
 * Return: factorial of `n` if positive
 *
 * -1 if `n` is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
