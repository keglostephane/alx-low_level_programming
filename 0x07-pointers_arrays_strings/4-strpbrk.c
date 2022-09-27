/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: char pointer - string to search in
 *
 * @accept: set of bytes to search
 *
 * Return: a pointer to the byte in `s` that matches one of
 * the bytes in `accept`.
 *`NULL` if no such bytes is found.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *str = 0;

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				str = s + i;
				return (str);
			}
		}
	}
	return (str);
}
