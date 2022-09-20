#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char pointer - string to reverse
 *
 */

void rev_string(char *s)
{
	int i, j, temp, l = 0;

	while (s[l] != '\0')
		l++;

	j = --l;

	for (i = 0; i <= l / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
