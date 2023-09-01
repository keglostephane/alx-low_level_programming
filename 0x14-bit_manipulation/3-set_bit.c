#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number to set the bit at given index to 1
 *
 * @index: index of the bit to use
 *
 * Return: 1 in success, -1 if an error occured
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	if (!index)
		*n += 1;
	else if (!*n && index)
	{
		*n += 1;
		*n = *n << index;
	}
	else
		*n = *n | (*n >> index);

	return (1);
}
