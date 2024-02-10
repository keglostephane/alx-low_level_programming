#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search
 *
 * @array: a pointer to the first element of the array to search in
 *
 * @size: the number of elements in `array`
 *
 * @value: the value to search for
 *
 * Return: the first inex where `value` is located
 * -1 if value is not present in `array` or `array` is NULL
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, pos, high;

	if (!array)
		return (-1);

	low = 0;
	pos = -1;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) *
			     (value - array[low]));

		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n",
			       pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (value > array[pos])
			low = ++pos;
		else
			high = --pos;
	}

	return (-1);
}
