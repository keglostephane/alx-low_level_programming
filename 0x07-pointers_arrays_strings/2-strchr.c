#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: char pointer - string to search in
 *
 * @c: char - character to search
 *
 * Return: a string to position where first occurrence of
 * character is found or `NULL` if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	char *str = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			str = s;
			return (str);
		}

		s++;
	}

	if (c == '\0')
	{
		str = s;
		return (str);
	}

	return (str);
}
