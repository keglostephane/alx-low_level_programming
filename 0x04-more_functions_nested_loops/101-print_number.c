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

	if  (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
		_putchar('-');

	if ((n >= 1 && n <= 9) || (-n >= 1 && -n <= 9))
	{
		if (n > 0)
			_putchar(n + '0');
		else
			_putchar(-n + '0');

		return;
	}

	r = (n % 10 > 0) ? n % 10 : -(n % 10);

	if (n < 0)
		print_number(-n / 10);
	else
		print_number(n / 10);

	_putchar(r + '0');
}
