#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array,followed by a new line
 *
 * @a: pointer to the array of integers
 *
 * @n: number of elements of array to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}

	printf("\n");

}
