/**
 * _memset - fills memory with a constant byte
 *
 * @s: char pointer - start memory address
 *
 * @b: char - constant byte to write
 *
 * @n: unsigned int -  number of bytes to write
 *
 * Return: string of constant bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (str);
}
