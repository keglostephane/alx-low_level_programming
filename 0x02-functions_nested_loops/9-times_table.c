#include "main.h"

/**
 * times_table - prints 9 times table, starting from 0
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) <= 9)
				_putchar(i * j + '0');
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}

			if (j == 9)
				_putchar('\n');

			else if (((i * j <= 9) && (i * (j + 1) > 9)) ||
				 ((i * j > 9) && (i * (j + 1) > 9)))

			{
				_putchar(',');
				_putchar(' ');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}

	}
}
