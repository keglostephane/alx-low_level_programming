#include "main.h"

/**
 * _pow - raise a number to power n
 *
 * @a: unsigned int - number
 *
 * @n: unsigned int - power n
 *
 * Return: number `a` raised to power `n`
 *
 * if n == 0 returns 1
 *
 * if a == 0 returns 1
 */

unsigned int _pow(unsigned int a, unsigned int n)
{
	if (a == 0)
		return (1);
	if (n == 0)
		return (1);

	return (a * _pow(a, n - 1));
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: const char pointer - string of binary digits
 *
 * Return: the converted number
 *
 * 0 if one or more chars in `b` that is not 0 or 1
 *
 * 0 if `b` is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, l = 0, sum = 0;


	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		l++;
		i++;
	}

	j = l - 1;
	for (i = 0; i < l; i++)
	{
		if (b[i] == '1')
			sum += _pow(2, j);

		j--;
	}

	return (sum);
}
