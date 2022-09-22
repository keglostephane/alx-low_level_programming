#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: char pointer - first string
 * @src: char pointer - secnd string
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (str);
}
