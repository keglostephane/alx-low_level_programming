#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @s: char pointer - string
 *
 * Return: a string with uppercase letters
 */

char *string_toupper(char *s)
{
	char *str = s;

	while (*s != '\0')
	{
		if ((*s >= 'a') && (*s <= 'z'))
			*s = *s - 32;

		s++;
	}

	return (str);
}
