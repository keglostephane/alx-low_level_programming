#include "main.h"

/**
 * get_bit - return the value of the bit a given index
 *
 * @n: number to use
 *
 * @index: index in the binary representation of the number (start from 0)
 *
 * Return: the value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);
	if (n == 0)
		return (0);

	bit = n >> index;

	return (bit & 1);
}
