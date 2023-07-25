#include "main.h"

/**
 * puts2 - prints every other character of string, starting with the first
 *
 * @str: pointer to start of the string
 *
 */
void puts2(char *str)
{
	char *s = str;
	int i, l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;

	}

	for (i = 0; i < l - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
