#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int d = (n > 0) ? n % 10 : -(n % 10);

	_putchar(d + '0');
	return (d);
}
