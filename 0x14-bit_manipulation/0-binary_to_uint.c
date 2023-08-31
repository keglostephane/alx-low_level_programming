#include <stdlib.h>
#include "main.h"

/**
 * _pow - returns the value of x raised to power y
 *
 * @x: number to raise to power
 *
 * @y: value of the power
 *
 * Return: the number raised to power y
 * if y is lower than 0, return -1
 */
int _pow(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (x == 0)
		return (0);

	if (x == 1 || x == -1)
		return (1);

	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a string of `0` and `1` chars
 *
 * Return: the converted number
 *
 * If there is one or more chars in string b different of `0` or `1`,
 * returns 0
 *
 * If b is NULL return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, j, len;

	if (!b)
		return (0);

	for (i = 0, len = 0; b[i] != '\0'; i++)
		len++;

	for (i = len - 1, j = 0, num = 0; i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - 48) * _pow(2, j);
	}

	return (num);
}
