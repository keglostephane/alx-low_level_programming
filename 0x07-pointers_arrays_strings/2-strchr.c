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
	char *str = NULL;

	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			str = s;
			break;
		}

		s++;
	}

	return (str);
}
