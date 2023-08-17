#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to use to separate numbers
 *
 * @n: number of integers to pass the function
 *
 * If separator is NULL, don't print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);

			if (i == n - 1)
				break;
			if (separator)
				printf("%s", separator);
		}

		va_end(args);
	}

	printf("\n");
}
