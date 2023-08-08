#include <stdlib.h>

/**
 * _strdup - return a copy of the string given as parameter
 *
 * @str : string to duplicate
 *
 * Return: a pointer to dynamically allocated memory containing a copy
 * of a string given as parameter
 *
 * if string is NULL or malloc fails returns NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = malloc(sizeof(char) * ++i);

	if (!ptr)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[j] = str[j];

	return (ptr);
}
