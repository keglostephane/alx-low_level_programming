/**
 * rot13 - encode a string using rot13
 *
 * @s: pointer to string to be encoded
 *
 * Return: the encoded string
 *
 */
char *rot13(char *s)
{
	int i, j;

	char alphab[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		      'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		      'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
		      'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == alphab[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
