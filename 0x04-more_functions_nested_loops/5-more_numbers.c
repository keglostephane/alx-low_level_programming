#include "main.h"

/**
 * print_two_digits - prints digits for positive numbers less than 100
 *
 * @n : number
 */
void print_two_digits(int n)
{
	if (n >= 0 && n < 100)
	{
		if (n < 10)
			_putchar(n + '0');
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
}

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			print_two_digits(j);

		putchar('\n');
	}
}
