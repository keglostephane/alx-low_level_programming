/**
 * _strspn - get the length of a prefix substring
 *
 * @s: pointer to string to be scanned
 *
 * @accept: pointer to string containing the characters scanned
 *
 * Return: the numbers of characters in 's' which consists only of characters
 * from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] == accept[j])
			continue;
		else
			break;
	}

	return (count);
}
