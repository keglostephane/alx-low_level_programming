/**
 * _memcpy - copies memory area
 *
 * @dest: char pointer - destination memory area
 *
 * @src: char pointer - source memory area
 *
 * @n: number of bytes to copy
 *
 * Description: copies `n` bytes from memory area `src` to
 * memory area `dest`
 *
 * Return: string at memory area `dest`
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *str = dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (str);
}
