/**
 * skip_char - skips characters from a string until a specific character
 *
 * @s: pointer to the string
 *
 * @c: character at which, stop to skip
 *
 * Return: the number of characters skipped in the string
 *
 * if @c equals to '*' don't skip anything, return 0
 */
int skip_char(char *s, char c)
{
	int n = 0;

	if (c == '*')
		return (0);

	if (*s == c)
		return (0);
	++n;
	return (1 + skip_char(s + n, c));
}

/**
 * is_same_string - checks if two strings are the same
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 1 if the two strings are equals, 0 otherwise
 */
int is_same_string(char *s1, char *s2)
{
	if (*s2 == '*')
		return (is_same_string((skip_char(s1, *(s2 + 1)) + s1), s2 + 1));

	if (*s1 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (is_same_string(++s1, ++s2));
}

/**
 * wildcmp - compare two strings
 *
 * @s1: pointer to first string
 *
 * @s2: pointer to second string
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 *
 * 's2' can contain the special character * that can replace
 * any string (including an empty string)
 */
int wildcmp(char *s1, char *s2)
{
	return (is_same_string(s1, s2));
}
