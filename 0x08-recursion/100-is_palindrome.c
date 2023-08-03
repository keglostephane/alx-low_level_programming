/**
 * str_end - goes to the end of a string
 *
 * @p: pointer to start of the string
 *
 * Return:  a pointer to the end of the string
 */
char *str_end(char *p)
{
	if (*p == '\0')
		return (--p);

	return (str_end(++p));
}

/**
 * cmp_start_end - compare bytes at start with those at end of a string
 *
 * @s: pointer to the start of the string
 *
 * @e: pointer to end of the string
 *
 * Return: 1 if bytes at start are equals to those at end of the string,
 * 0 otherwise
 */
int cmp_start_end(char *s, char *e)
{
	if (*s == '\0')
		return (1);

	if (*s != *e)
		return (0);

	return (cmp_start_end(++s, --e));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *b = s;

	return (cmp_start_end(s, str_end(b)));
}
