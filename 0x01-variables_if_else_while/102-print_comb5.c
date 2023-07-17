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

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(32);
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if ((i == 98) && (j == 99))
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
