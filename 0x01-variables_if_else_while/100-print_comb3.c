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
	int i, j, first, last;

	first = 48;

	last = 57;

	for (i = first; i <= last; i++)
	{
		for (j = i + 1; j <= last; j++)
		{
			putchar(i);
			putchar(j);
			if (i == last - 1)
				break;
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
