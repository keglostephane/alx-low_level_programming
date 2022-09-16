#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j, k;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 1; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j == 1)
					_putchar(j + '0');

				_putchar(k + '0');

				if ((j == 1) && (k == 4))
					break;

			}
		}

		_putchar('\n');

		i++;
	}
}
