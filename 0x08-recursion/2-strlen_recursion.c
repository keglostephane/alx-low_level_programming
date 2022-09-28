/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: char pointer - string
 *
 * Return: length of string `s`
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
		return (l);

	s++;
	return (1 + _strlen_recursion(s));
}
