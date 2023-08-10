#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: the length of the string excluding the null byte
 *
 */
unsigned int _strlen(char *s)
{
	unsigned int i, l = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		l++;

	return (l);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: a pointer to a dynamically allocated memory containing
 * the concatenation of the two strings
 *
 * if malloc fails, returns NULL
 *
 * if NULL is passed for a string treat it like an empty string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *ptr;

	i = !(_strlen(s1)) ? 0 : _strlen(s1);
	j = !(_strlen(s2)) ? 0 : _strlen(s2);
	l = 0;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (!ptr)
		return (NULL);

	if (s1)
		for (k = 0; k < i; k++, l++)
			ptr[l] = s1[k];

	if (s2)
		for (k = 0; k < j; k++, l++)
			ptr[l] = s2[k];

	ptr[l] = '\0';

	return (ptr);
}
