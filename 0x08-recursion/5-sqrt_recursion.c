/**
 * guess_root - guess square root of a number
 *
 * @g: starting guess number
 *
 * @n: number to guess the square root
 *
 * Return: the guessed square root of the number, else returns -1
 */
int guess_root(int g, int n)
{
	if (n <= 0)
		return (-1);

	if (g * g == n)
		return (g);

	if (g == n / 2)
		return (-1);

	return (guess_root(++g, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: the natural square root of the number
 * if number doesn't have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	int s = 1;

	return (guess_root(s, n));
}
