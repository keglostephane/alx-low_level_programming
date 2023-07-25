#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the start of the string
 *
 * Return: the number of bytes in the string excluding null byte ('\0)
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
