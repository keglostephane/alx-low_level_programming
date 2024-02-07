#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array of integers
 * using the binary search algorith
 *
 * @array: a pointer to the first element of the array to search in
 *
 * @size: the number of elements in `array`
 *
 * @value: the value to search for
 *
 * Return: the index where `value` is located
 * If `value` is not present in `array` of if `array` is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, middle, right;

	left = 0;
	right = size - 1;

	while (array && (left <= right))
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
			printf("%lu%s", i, i != right ? ", " : "\n");

		middle = (left + right) / 2;

		if (value < (int)middle)
			right = middle - 1;
		else if (value > (int)middle)
			left = middle + 1;
		else
			return (left);
	}

	return (-1);
}
