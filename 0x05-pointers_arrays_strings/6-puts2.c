#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: char pointer - given string
 *
 */

void puts2(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
		l++;

	l--;

	for (i = 0; i <= l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
