#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: char pointer - string to encode
 *
 * Return: string encoded
 *
 */

char *rot13(char *s)
{
	char *str = s;

	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *r = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i;

	while (*s !=  '\0')
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*s == a[i])
			{
				*s = r[i];
				break;
			}
		}

		s++;
	}

	return (str);
}
