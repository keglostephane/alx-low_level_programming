#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: int, size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, c, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		c = 1;

		while (c <= size)
		{

			i = size;

			while (i > c)
			{
				_putchar(' ');

				i--;
			}

			n = 1;

			while (n <= c)
			{
				_putchar('#');

				n++;
			}

			_putchar('\n');

			c++;


		}
	}
}
