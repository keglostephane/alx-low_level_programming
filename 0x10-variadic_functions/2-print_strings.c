#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: string to print between strings
 *
 * @n: number of strings to pass to the function
 *
 * If separator is NULL, don't print it
 *
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (i == n - 1)
				break;
			if (separator)
				printf("%s", separator);
		}

		va_end(args);
	}

	printf("\n");
}
