#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to convert in binary
 *
 */
void print_binary(unsigned long int n)
{
	int mask = 1;
	char bit;

	if (n == 0 || n == 1)
	{
		_putchar(n + 48);
		return;
	}

	bit = n & mask ? '1' : '0';

	if (n > 0)

		print_binary(n >> 1);

	_putchar(bit);
}
