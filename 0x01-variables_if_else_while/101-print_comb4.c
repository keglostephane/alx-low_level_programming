#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Start the program
 *
 * Return: O(success)
 *
 */
int main(void)
{
	int i, j, k, first, last;

	first = 48;

	last = 57;

	for (i = first; i <= last; i++)
	{
		for (j = i + 1; j <= last; j++)
		{
			for (k = j + 1; k <= last; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == last - 2)
					break;
				putchar(44);
				putchar(32);

			}
		}
	}

	putchar(10);

	return (0);
}
