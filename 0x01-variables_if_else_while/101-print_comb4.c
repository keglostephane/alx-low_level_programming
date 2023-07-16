#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if ((i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == 55) && (j == 56) && (k == 57))
					{
						putchar(10);
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	return (0);
}
