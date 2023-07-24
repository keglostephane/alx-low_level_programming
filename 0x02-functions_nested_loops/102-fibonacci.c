#include <stdio.h>

/**
 * fibonacci - prints the first n numbers starting from 1 and 2
 *
 * @n: fibonacci numbers to print
 */
void fibonacci(unsigned int n)
{
	unsigned long a, b, s;
	unsigned int i;

	a = 1, b = 2, s = 0, i = 1;

	printf("%lu, %lu, ", a, b);

	if (n >= 3)
	{
		i += 2;
		while (i <= n)
		{
			s = a + b;

			if (i == 50)
				printf("%lu\n", s);
			else
				printf("%lu, ", s);

			a = b;
			b = s;

			i++;
		}
	}
}

/**
 * main - Entry point
 *
 * Return: 0 Always success
 *
 */
int main(void)
{
	unsigned int n = 50;

	fibonacci(n);

	return (0);
}
