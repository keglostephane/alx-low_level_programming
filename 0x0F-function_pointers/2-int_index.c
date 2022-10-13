#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: int pointer - array of integer
 *
 * @size: int - number of elements of the array
 *
 * @cmp: function pointer - function used to compare values
 *
 * Return:
 *
 * the index of the first element for which the `cmp` function
 * does not return 0
 *
 * if no element matches return -1
 *
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int (*fptr)(int);

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	fptr = cmp;

	for (i = 0; i < size; i++)
	{
		if (fptr(array[i]) != 0)
			return (i);
	}

	return (-1);
}
