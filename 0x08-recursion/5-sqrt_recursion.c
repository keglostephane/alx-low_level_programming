#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int - number
 *
 * Return: natural square root of `n`
 *
 * -1 if `n` have no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (guess_sqrt(n, 1));
}


/**
 * guess_sqrt - tries to guess natural square root of a number
 *
 * @n: int - square root to calculate
 *
 * @i: int - square root value to check
 *
 * Return: correct natural square root of `n`
 *
 * -1 if `n` have no natural square root
 */

int guess_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (guess_sqrt(n, ++i));
}
