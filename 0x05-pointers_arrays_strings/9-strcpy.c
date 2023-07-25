#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 * including the termination null ('\0'), to the buffer pointed to by dest.
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * Return: a pointer to the the start of string pointed by 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, ls;
	char *str = dest;

	ls = 0;
	while (src[ls] != '\0')
		ls++;

	for (i = 0, j = 0; j < ls; i++, j++)
		dest[i] = src[j];

	return (str);
}
