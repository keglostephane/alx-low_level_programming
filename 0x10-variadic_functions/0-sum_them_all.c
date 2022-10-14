#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: unsigned int - first parameter
 *
 *
 * Return: sum of all parameters
 *
 * 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
