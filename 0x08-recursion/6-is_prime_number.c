#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number;
 *
 * @n: int - number
 *
 * Return: 1 if a prime number, otherwise 0
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (prime_num_check(n, 2));
}

/**
 * prime_num_check - checks if number a prime number
 *
 * @n: int - number to check
 *
 * @i: int - divide by `i`
 *
 * Return: 1 if a prime number, otherwise 0
 */

int prime_num_check(int n, int i)
{
	if ((n % i) == 0)
		return (0);

	if (i == n - 1)
		return (1);

	return (prime_num_check(n, ++i));
}
