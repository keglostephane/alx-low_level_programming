/**
 * _memcpy - copies bytes from one memory area to another
 *
 * @dest: pointer to source memory area
 *
 * @src: pointer to destination memory area
 *
 * @n: number of bytes to copy
 *
 * Return: a pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
