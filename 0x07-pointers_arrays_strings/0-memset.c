/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 *
 * @b: constant bytes to fill memory area with
 *
 * @n: number of bytes of memory area to fill
 *
 * Return: pointer to memory area filled with constant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
