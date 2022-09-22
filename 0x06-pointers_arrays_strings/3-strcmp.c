#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: char pointer - first string
 * @s2:  char pointer - second string
 *
 * Return:
 * 0 if equals
 * a negative value if `s1` is less than `s2`
 * a positive value if `s1` is greater than `s2`
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if ((int)*s1 > (int)*s2)
		{
			i = 15;
			return (i);
		}
		else if ((int)*s1 < (int)*s2)
		{
			i = -15;
			return (i);
		}

		s1++;
		s2++;
	}

	return (i);
}
