#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: char pointer - first string
 * @s2: char pointer - second string
 *
 * Return: On sucess, concatenated string
 * On failure, return `NULL`
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;

	char *ptr;

	if (s1 == 0)
		l1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		l1 = i++;
	}

	if (s2 == 0)
		l2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
		l2 = i++;
	}

	ptr =  malloc((l1 + l2) * sizeof(*ptr) + 1);

	if (!ptr)
		return (NULL);

	for (i = 0; i <= l1 - 1; i++)
	{
		if (s1[i] == '\0')
			break;
		ptr[i] = s1[i];
	}

	for (i = 0; i <= l2 - 1; i++)
	{
		if (s2[i] == '\0')
			break;
		ptr[i + l1] = s2[i];
	}

	ptr[l2 + l1] = '\0';

	return (ptr);
}
