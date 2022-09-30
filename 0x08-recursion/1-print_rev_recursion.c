#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: char pointer - string to reverse
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		rev_print(str_end(s));

	else
		return;
}

/**
 * str_end - points to end of string
 *
 * @s: char pointer - string
 *
 * Return: last bytes of a string ('\0')
 */

char *str_end(char *s)
{

	if (*s == '\0')
	{
		s--;
		return (s);
	}

	return (str_end(++s));
}

/**
 * rev_print - prints a reversed string
 *
 * @s: char pointer - string
 *
 */

void rev_print(char *s)
{
	if (*s == '\n')
	{
		_putchar(*s);
		return;
	}

	_putchar(*s);
	rev_print(--s);
}
