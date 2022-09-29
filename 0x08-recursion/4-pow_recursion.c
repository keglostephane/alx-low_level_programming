/**
 * _pow_recursion - returns the value of x raised by y
 *
 * @x: int - number raised to power
 *
 * @y: int - power value
 *
 * Return: `x` raised to power `y`
 *
 * if `y` is lower than `0`, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
