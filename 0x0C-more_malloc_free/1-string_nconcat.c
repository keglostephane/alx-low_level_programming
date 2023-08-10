#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: the length of the string excluding the null byte
 *
 */
unsigned int _strlen(char *s)
{
	unsigned int i, l = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		l++;

	return (l);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes to copy from s2
 *
 * Return: the concatenation of the first string with n byte(s) from
 * the second string
 *
 * if n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * in failure, returns NULL
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1, ls2, i, j, k;
	char *ptr;

	ls1 = _strlen(s1);
	ls2 = _strlen(s2);
	k = 0;

	ptr = malloc(sizeof(char) * (ls1 + ls2 + 1));

	if (!ptr)
		return (NULL);

	if (s1)
		for (i = 0; s1[i] != '\0'; i++, k++)
			ptr[k] = s1[i];

	if (s2)
	{
		if (n < ls2)
			for (j = 0; j < n; j++, k++)
				ptr[k] = s2[j];
		else
			for (j = 0; s2[j] != '\0'; j++, k++)
				ptr[k] = s2[j];
	}

	ptr[k] = '\0';

	return (ptr);
}
