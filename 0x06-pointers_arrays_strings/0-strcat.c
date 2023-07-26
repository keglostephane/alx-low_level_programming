#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: a pointer to the start of the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;
	int i, j, ls, ld;

	ls = 0;
	while (str[ls] != '\0')
		ls++;

	ld = 0;
	while (str[ld] != '\0')
		ld++;


	for (i = ld, j = 0; i <= ld + ls; i++, j++)
		dest[i] = src[j];

	return (str);
}
