#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to a string
 *
 * @c: character to search in the string
 *
 * Return: a pointer to the first occurence of the character in the string or
 * NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i, ls;

	ls = 0;
	while (s[ls] != '\0')
		ls++;

	for (i = 0; i < ls - 1; i++)
		if (s[i] == c)
			return (s + i);

	return (NULL);
}
