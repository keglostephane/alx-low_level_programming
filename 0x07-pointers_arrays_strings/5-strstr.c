/**
 * _strstr - locates a substring
 *
 * @haystack: char pointer - string in which to search
 *
 * @needle: char pointer - substring to search
 *
 * Description: find the first occurrence of the substring
 * `needle` in the string `haystack`
 *
 * Return: a pointer to the beginning of the located substring.
 * `NULL` if not found
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *str;

	int i, j, match = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = match; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (j == 0)
					str = haystack + i;

				match++;
			}

			else
			{
				match = 0;
				str = 0;
			}

			break;

		}

	}

	return (str);

}
