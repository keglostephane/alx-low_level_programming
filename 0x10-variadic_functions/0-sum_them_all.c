#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 *
 * @n: number of intergers to sum
 *
 * Return: the sum of all of its parameters
 *
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int num, sum = 0;
	unsigned int i;
	va_list args;

	if (!n)
		return (0);

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			sum += num;
		}

		va_end(args);
	}

	return (sum);
}
