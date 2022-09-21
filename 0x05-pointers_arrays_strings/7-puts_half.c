#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char pointer - given string
 *
 */

void puts_half(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
		l++;

	l--;

	if ((l % 2) == 0)
	{
		for (i = (l / 2) + 1; i <= l; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; i <= l; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
