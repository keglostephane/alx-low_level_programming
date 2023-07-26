/**
 * leet - encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: the string encoded
 *
 */
char *leet(char *s)
{
	int i, j;
	int lower[5] = {97, 101, 111, 116, 108};
	int upper[5] = {65, 69, 79, 84, 76};
	int values[5] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 65 || s[i] == 97 || s[i] == 69 || s[i] == 101 ||
		    s[i] == 79 || s[i] == 111 || s[i] == 84 || s[i] == 116 ||
		    s[i] == 76 || s[i] == 108)
		{
			for (j = 0; j <= 4; j++)
				if (upper[j] == s[i] || lower[j] == s[i])
					s[i] = values[j];
		}
	}

	return (s);
}
