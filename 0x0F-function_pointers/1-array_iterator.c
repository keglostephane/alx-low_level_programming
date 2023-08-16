#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 *
 * @array: array of integers
 *
 * @size: number of elements of the array
 *
 * @action: function to execute on each element of the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
