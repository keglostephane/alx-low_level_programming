#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flig
 * to get from one number to another
 *
 * @n: initial number
 *
 * @m: final number
 *
 * Return: the number of bits to flip in the initial number to get
 * the final number
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l, b;

	l = n > m ? n : m;
	b = 0;

	if (n == m)
		return (0);

	while (l != 0)
	{
		if ((m & 1) != (n & 1))
			b++;

		m = m >> 1;
		n = n >> 1;
		l = l >> 1;
	}

	return (b);
}
