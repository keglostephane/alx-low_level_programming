#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: int pointer - point to first integer
 * @b: int pointer - point to second integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
