#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: pointer to the string to print in reverse
 *
 */
void _print_rev_recursion(char *s)
{
	char *p = s;

	if (*s != '\0')
		_print_rev_recursion(++s);

	if (*s != *p)
		_putchar(*(--s));

	if (*s == *p)
		return;
}
