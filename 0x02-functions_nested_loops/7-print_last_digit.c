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

/**
 * print_last_digit - Print the last digit of a number
 * @i: int, number
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	_putchar(_abs(i) % 10);
	return (_abs(i) % 10);
}
