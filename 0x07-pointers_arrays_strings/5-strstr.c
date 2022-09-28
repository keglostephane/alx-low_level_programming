#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: char pointer - string in which to search
 *
 * @needle: char pointer - substring to search
 *
 * Description: find the first occurrence of the substring
 * `needle` in the string `haystack`
 *
 * Return: a pointer to the beginning of the located substring.
 * `NULL` if not found
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int c = 0;

	char *str = needle;

	while (*haystack != '\0')
	{
		needle = str;

		while ((*needle != '\0') && (*haystack != '\0')
		       && (*(needle + c) == *(haystack + c)))
		{
			if (*(needle + c) != *(haystack + c))
				break;

			c++;
		}

		if (*(needle + c) == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
