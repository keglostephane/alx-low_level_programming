#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: int, number
 *
 * Return: absolute value
 *
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else if (n == 0)
		return (0);
	else
		return (n);
}
