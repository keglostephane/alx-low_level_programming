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
			printf("%d%s", array[i], i != right ? ", " : "\n");

		middle = (left + right) / 2;

		if (value < array[(int)middle])
			right = middle - 1;
		else if (value > array[(int)middle])
			left = middle + 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 *
 * @size: the number of elements in `array`
 *
 * @value: the value to search for
 *
 * Return: the first index where `value` is located
 * -1 If `value` is not present in `array` or `array` is NULL
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t p, low, high;
	int i;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n",
		       low, array[low]);
		high = 2;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		return (binary_search(array + low, high - low + 1, value));
	}

	p = 1;
	while (p < size && array[p] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		p *= 2;
	}

	low = p / 2;
	high = p > size - 1 ? size - 1 : p;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       low, high);
	i = binary_search(array + low, high - low + 1, value);

	if (i < 0)
		return (i);
	return (i + low);
}
