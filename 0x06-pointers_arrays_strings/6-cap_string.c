#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: char pointer - string to capitalize
 *
 * Return: a string with all words capitalized
 *
 */

char *cap_string(char *s)
{
	char *str = s;

	char *sep = " \t\n,;.!?\"(){}";

	int i, space = 1;

	while (*s != '\0')
	{
		if (space)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 32;
				space = 0;
			}

			else if ((*s >= 'A' && *s <= 'Z') || (*s >= '0' && *s <= '9'))
				space = 0;
		}

		else
		{
			for (i = 0; sep[i] != '\0'; i++)
			{
				if (*s == sep[i])
				{
					space = 1;
					break;
				}
			}

		}

		s++;
	}

	return (str);
}
