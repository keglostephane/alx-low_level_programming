#include "main.h"

/**
 * _strncpy - copies a string to a buffer
 * @dest: char pointer - destination string
 * @src: char pointer - source string
 * @n: int - number of bytes from source string to copy
 *
 * Description: copies `n` bytes from the string pointed by `src`,
 * including the terminating null byte `\0`, to the buffer pointed
 * by `dest`
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;

		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (str);
}
