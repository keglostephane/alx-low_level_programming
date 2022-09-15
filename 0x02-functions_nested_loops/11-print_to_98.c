#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print Natural numbers from n to 98
 * @i : int, start number
 *
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			break;
		printf(", ");
	}
	printf("\n");
}
