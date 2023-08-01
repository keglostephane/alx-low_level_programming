#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a square matrix of
 * integers
 *
 * @a: pointer to a multdimensional array
 *
 * @size: size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, ld, rd;

	ld = 0;
	rd = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				ld += a[i * size + j];
			if (i + j == size - 1)
				rd += a[i * size + j];
		}
	}

	printf("%d, %d\n", ld, rd);
}
