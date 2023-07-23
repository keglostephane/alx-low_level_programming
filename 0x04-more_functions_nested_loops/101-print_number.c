#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: number
 *
 */
void print_number(int n)
{
	int r;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if  (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	if (n >= 1 && n <= 9)
	{
		_putchar(n + '0');
		return;
	}

	r = n % 10;
	print_number(n / 10);
	_putchar(r + '0');
}
