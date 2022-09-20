#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char pointer - point to character string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int c = 0, i = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}

	return (sizeof(*s) * c);
}
