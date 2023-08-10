#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the main program
 *
 * @ac: number of arguments
 *
 * @av: array of arguments (strings)
 *
 * Return: a string resulting of the concatenation of all arguments
 *
 * If ac == 0 or av = NULL returns NULL
 *
 * If malloc failed returns NULL
 *
 * Each argument should be followed by a new line in the string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k;
	unsigned int size;

	if (!ac || !av)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		++size;
	}

	ptr = malloc(sizeof(char) * (size + 1));

	if (!ptr)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			ptr[k] = av[i][j];

		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);
}
