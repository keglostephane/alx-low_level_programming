#include "main.h"

/**
 * _strncat - concatenates two strings, use at most n bytes from source string
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * @n: number of byte(s) to copy from source string
 *
 * Return: a pointer to destionation string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, ld;

	ld = 0;
	while (dest[ld] != '\0')
		ld++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ld + i] = src[i];

	dest[ld + i] = '\0';

	return (dest);
}
