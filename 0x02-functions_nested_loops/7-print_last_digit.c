#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @i: int, number
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int i)
{
	int d;

	if (i < 0)
		d = -1 * (i % 10) ;
	else
		d = i % 10;

	_putchar(d + '0');
	return (d);
}
