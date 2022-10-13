#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: char pointer - name to print
 *
 * @f: function pointer - function to use to print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fptr)(char *);

	fptr = f;

	if (name == NULL || f == NULL)
		return;

	fptr(name);
}
