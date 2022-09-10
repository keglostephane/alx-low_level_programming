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
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i >= 10)
		{
			putchar(i + 87);
			continue;
		}

		putchar(i + 48);
	}

	putchar(10);

	return (0);
}
