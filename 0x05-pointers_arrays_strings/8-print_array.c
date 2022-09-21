#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int pointer - integer array
 * @n: int - number of array element to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			break;

		printf(", ");
	}

	printf("\n");
}
