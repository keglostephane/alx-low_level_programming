/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer - string
 *
 * @accept: char pointer - substring
 *
 * Return: the number of bytes in `s` which consist only of bytes
 * from `accept`
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	char *str = s;

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*accept == *s)
			{
				c++;
				break;
			}

			s++;
		}

		accept++;

		s = str;
	}

	if (c != 0)
	{
		c++;
		return (c);
	}

	return (0);
}


