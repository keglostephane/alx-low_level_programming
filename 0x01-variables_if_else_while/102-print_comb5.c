#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in success
 *
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((i * 10 + j) < (k * 10 + l))
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 &&
						    k == 57 && l == 57)
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
	}

	return (0);
}
