/**
 * cap_string - capitalizes all words of a string
 *
 * @s: pointer to string to capitalize
 *
 * Return: the capitalized string
 *
 */
char *cap_string(char *s)
{
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			       '(', ')', '{', '}'};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
				for (j = 0; j <= 12; j++)
					if (s[i - 1] == separators[j])
						s[i] -= 32;
		}
	}

	return (s);
}
