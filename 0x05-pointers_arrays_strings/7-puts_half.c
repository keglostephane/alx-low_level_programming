#include "main.h"

/**
 * puts_half - prints the second half of a string; followed by a new line
 *
 * @str: pointer to start of the string
 *
 */
void puts_half(char *str)
{
	int i, j, l;

	l = 0;
	while (str[l] != '\0')
		l++;

	l--;

	j = (l % 2 == 0) ? l / 2 : (l - 1) / 2;

	for (i = j + 1; i <= l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
