#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if ((i == 56) && (j == 57))
				{
					putchar(10);
					break;
				}
				putchar(44);
				putchar(32);
			}

		}
	}
	return (0);
}
