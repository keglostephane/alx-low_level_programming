#include <stdio.h>

/**
 * largest_prime_factors - prints the largest prime factor of a number
 *
 * @n : number
 *
 */
void largest_prime_factors(long int n)
{
	long int i, largest = 2;

	while (n % 2 == 0)
		n = n / 2;

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
			n = n / i;

		largest = i;
	}

	if (n > largest)
		largest = n;

	printf("%ld\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 Always success
 *
 */
int main(void)
{
	long int n = 612852475143;

	largest_prime_factors(n);

	return (0);
}
