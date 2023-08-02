/**
 * _pow_recursion - returns the value of x raised to power y
 *
 * @x: number to raise to power
 *
 * @y: value of the power
 *
 * Return: the number raised to power y
 * if y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (x == 0)
		return (0);

	if (x == 1 || x == -1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
