#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = size;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}

			k = 0;
			while (k < i)
			{
				_putchar('#');
				k++;
			}

			_putchar('\n');
		}
	}
}
