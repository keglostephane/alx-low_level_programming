/**
 * factorial - returns the factorial of a given number
 *
 * @n: number
 *
 * Return: the factorial of the number
 * if number is lower than 0, return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
