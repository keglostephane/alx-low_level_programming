#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: char pointer - string to encode
 *
 * Return: string encoded in leet
 */

char *leet(char *s)
{
	char *str = s;

	char *l = {"AEOTL"};

	char *v = {"43071"};

	int i;

	while (*s != '\0')
	{
		for (i = 0; l[i] != '\0'; i++)
		{
			if ((*s == l[i]) || (*s == l[i] + 32))
				*s = v[i];
		}

		s++;
	}

	return (str);
}
