#include "main.h"

/**
 * _strncpy - copies a source string to a destination buffer,
 * use at most n byte(s) from source string
 *
 * @dest: poioqnter to destination buffer
 *
 * @src: pointer to source string
 *
 * @n: number of byte(s) to copy from source string
 *
 * Return: destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}

	return (dest);
}
