#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *
 * on each element of an array
 *
 * @array: int pointer - array of integers to iterate on
 *
 * @size: size_t - size of the array
 *
 * @action: function pointer - function to execute on each array's element
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	void (*fptr)(int);

	if (array == NULL || size <= 0 || action == NULL)
		return;

	fptr = action;

	for (i = 0; i < size; i++)
		fptr(array[i]);
}
