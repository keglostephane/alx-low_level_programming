#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: const char pointer - string to use as separator
 *
 * @n: const unsigned int - first known number
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(args);

}
