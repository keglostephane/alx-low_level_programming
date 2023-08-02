/**
 * is_prime - checks if a number is not a multiple of a prime number
 *
 * @n: number
 *
 * @p: prime number to start with
 *
 * Return: 1 if not a multiple of a prime, otherwise 0
 * if number equals 1 returns 0
 */
int is_prime(int n, int p)
{
	if (n == 1)
		return (0);

	if (n <= 0)
		return (0);


	if (n % 2 == 0)
		return (0);

	if (p * p == n)
		return (0);

	if (p > n / 2)
		return (1);

	return (is_prime(n, p + 2));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number
 *
 * Return: 1 if it's a prime number otherwise 0
 */
int is_prime_number(int n)
{
	int s = 3;

	return (is_prime(n, s));
}
