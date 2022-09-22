#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: char pointer - first string
 * @src: char pointer - second string
 * @n: int - number of bytes to copy from second string
 *
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;
	int i;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;

		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (str);
}
