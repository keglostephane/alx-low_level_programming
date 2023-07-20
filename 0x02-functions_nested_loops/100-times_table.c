#include "main.h"

/**
 * print_digits - prints digits of a positive number less than 1000
 *
 * @n: number
 *
 */
void print_digits(int n)
{
	if (n < 1000 && n >= 0)
	{
		if (n < 10)
			_putchar(n + '0');
		else if (n >= 10 && n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n / 100 + '0');
			_putchar(n % 100 / 10 + '0');
			_putchar(n % 100 % 10 + '0');
		}
	}
}
/**
 * print_times_table - prints the `n` times table, starting with 0
 *
 * @n: number of times table
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				print_digits(i * j);

				if (j == n)
					_putchar('\n');
				else if ((i * j < 10) && (i * (j + 1) < 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((i * j >= 10 && i * (j + 1) < 100) ||
					 (i * j < 10 && i * (j + 1) < 100))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((i * j < 100 && i * (j + 1) >= 100) ||
					 (i * j >= 100 && i * (j + 1) >= 100))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
