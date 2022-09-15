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

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description : prints the alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
