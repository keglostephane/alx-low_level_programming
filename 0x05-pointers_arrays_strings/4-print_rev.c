#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: pointer to the start of the string
 *
 */
void print_rev(char *s)
{
	char *str = s;
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}

	i--;
	while (i != -1)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
