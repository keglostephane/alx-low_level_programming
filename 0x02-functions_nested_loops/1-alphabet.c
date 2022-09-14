#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description : prints the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}

	_putchar('\n');
}
