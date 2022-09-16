#include "main.h"

/**
 * print_square - Print a square
 * @size: int, size of the square
 *
 */
void print_square(int size)
{
	int c = size, i = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (c > 0)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');

			_putchar('\n');

			c--;
		}
	}
}
