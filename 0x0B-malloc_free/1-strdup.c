#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in
 *
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: char pointer - string
 *
 * Return:  `NULL` if str is NULL, or insufficient memory
 *
 * On success returns a pointer to the duplicated string.
 *
 */

char *_strdup(char *str)
{
	char *ptr;

	int s, i = 0;

	if (str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = i++;

	ptr = malloc(s * sizeof(*ptr));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= s - 1 ; i++)
	{
		ptr[i] = *str;
		str++;
	}

	return (ptr);
}
