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
		j = 0;
		if (haystack[i] == needle[j])
		{
			pos = i;

			while (needle[j] != '\0' && haystack[i] != '\0')
			{
				if (haystack[i] == needle[j])
					i++;
				else
					break;

				j++;
			}

			if (needle[j] == '\0')
				return (haystack + pos);

			continue;
		}

	}

	return (NULL);
}
