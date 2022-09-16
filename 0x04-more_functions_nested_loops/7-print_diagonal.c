#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: int, number of `\` to display in diagonal
 *
 */
void print_diagonal(int n)
{
	int i, s;

	s = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			i = s;

			while (i > 0)
			{
				_putchar(' ');
				i--;
			}

			_putchar('\\');
			_putchar('\n');

			s++;
			n--;

		}
	}
}
