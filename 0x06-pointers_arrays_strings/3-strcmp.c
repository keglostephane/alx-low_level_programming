#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if 's1' is equal to 's2',
 * else the difference between the first different pair of values
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	if (s1[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
