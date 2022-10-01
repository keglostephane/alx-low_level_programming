#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers given as arguments
 *
 * @argc: int - numbers of arguments
 *
 * @argv: pointer to char pointer - array of string (arguments)
 *
 * Return:
 * If no number is passed , print 0
 *
 * if one of the number contains symbols that are no digits,
 * Print `Error` and return 1
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	char *str;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (i = 1; i <= argc - 1; i++)
	{
		str = argv[i];

		while (*str != '\0')
		{
			if (isdigit(*str))
			{
				str++;
				continue;
			}

			printf("Error\n");
			return (1);


		}

		sum += atoi(argv[i]);

	}

	printf("%d\n", sum);

	return (0);
}
