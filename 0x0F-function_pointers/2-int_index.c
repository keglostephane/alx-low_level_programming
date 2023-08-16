#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: array of integers
 *
 * @size: number of elements of the array
 *
 * @cmp: function to use to compare the values
 *
 * Return: the index of the first element for which @cmp does not return 0
 *
 * if no element matches, return -1
 *
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!size)
		return (-1);

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
