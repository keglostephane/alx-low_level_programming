#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 *
 * @args: list of variable arguments
 *
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 *
 * @args: list of variable arguments
 *
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float point number
 *
 * @args: list of variable arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - prints a string
 *
 * @args: list of variable arguments
 *
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
		printf("%s", str);

	if (!str)
		printf("(nil)");
}

/**
 * print_all - prints anything
 *
 * @format: const pointer to constant string
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	fspec chartof[] = {{'c', print_char},
			   {'i', print_int},
			   {'f', print_float},
			   {'s', print_str}};
	va_list args;

	va_start(args, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == chartof[j].c)
			{
				printf("%s", sep);
				chartof[j].func(args);
			}
			j++;
		}

		sep = ", ";

		i++;
	}

	va_end(args);

	printf("\n");

}
