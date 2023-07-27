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
		for (j = 0; j <= 4; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = values[j];
		}
	}

	return (s);
}
