#include <stdlib.h>

/**
 * _strlength - gets length of a string including NULL character
 *
 * @s: char pointer - string
 *
 * Return: length of the string
 *
 */

int _strlength(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: char pointer - destination string
 *
 * @s2: char pointer - source string
 *
 * @n: number of bytes to copy from source string
 *
 * Return: On success, returns a pointer to resulting string
 *
 * On fail, returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, l1, l2;

	char *ptr;

	if (s1 == NULL)
		s1 = "";

	l1 = _strlength(s1);

	if (s2 == NULL)
		s2 = "";

	l2 = _strlength(s2);

	if (n >= l2)
		n = l2;

	ptr = malloc((l1 + n + 1) * sizeof(ptr));

	if (!ptr)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (n > 0 && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		n--;
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
