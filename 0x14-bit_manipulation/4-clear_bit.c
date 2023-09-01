#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to set the bit
 *
 * @index: index of the bit to set to 0
 *
 * Return: 1 in success, -1 in failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (!n || index > 63)
		return (-1);

	if (!index)
		*n -= 1;
	else
		*n = *n & ~(mask << index);

	return (1);
}
