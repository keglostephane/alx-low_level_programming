#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char pointer - pointer to string
 *
 */

void print_rev(char *s)
{
	int c, i = 0;

	while (s[i] != '\0')
		i++;

	c = i--;

	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}

	_putchar('\n');
}
