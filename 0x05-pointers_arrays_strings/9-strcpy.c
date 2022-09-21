#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string to a buffer
 * @dest: char pointer - destination string
 * @src: char pointer - source string
 *
 * Description: copies the string pointed by `src`, including
 * the terminating null byte `\0`, to the buffer pointed by
 * `dest`
 *
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (ptr);
}
