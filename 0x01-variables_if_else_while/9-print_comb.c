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

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
	}

	putchar(10);

	return (0);
}
