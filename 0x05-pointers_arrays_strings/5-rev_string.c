#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the start of the string
 *
 */
void rev_string(char *s)
{
	int i, j, l;
	char temp;

	l = 0;
	while (s[l] != '\0')
		l++;

	i = 0;
	j = --l;
	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
