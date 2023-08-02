/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: point to the string
 *
 * Return: the length of the string excluding the null byte.
 */
int _strlen_recursion(char *s)
{
	unsigned int n = 0;

	if (*s == '\0')
		return (n);

	return (++n + _strlen_recursion(++s));

}
