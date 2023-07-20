#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 102; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
