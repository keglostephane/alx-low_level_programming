#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a vlue in a sorted array of integers
 * using the jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 *
 * @size: the number of element in `array`
 *
 * @value: the value to search for
 *
 * Return: the first index where `value` is located
 * If `value` is not present in `array` or `array` is NULL retun -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, i, j, block;

	if (!array)
		return (-1);

	step = sqrt(size);
	i = 0;
	block = step;

	while (value >= array[i])
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (block > size - 1)
			break;
		i += step;
		block += step;
		if (value <= array[i])
		{
			i -= step;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
	for (j = i; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}

	return (-1);
}
