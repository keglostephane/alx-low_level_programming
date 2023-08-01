#include <stdlib.h>

/**
 * _strstr - locate a substring in a string
 *
 * @haystack: pointer to the string to be scanned for a substring
 *
 * @needle: pointer to the substring to search
 *
 * Return: a pointer to the first occurence of the substring in the string,
 * else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, pos;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		pos = i;
		j = 0;

		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
				i++;
			else
				break;

			j++;
		}

		if (needle[j] == '\0')
			return (haystack + pos);

	}

	return (NULL);
}
