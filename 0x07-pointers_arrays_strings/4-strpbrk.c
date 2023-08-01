#include <stdlib.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: pointer to string to be scanned
 *
 * @accept: string containing the characters to match
 *
 * Return: a pointer to the character in 's' that matches one of the character
 * in 'accept', else returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}
	}

	return (NULL);
}
