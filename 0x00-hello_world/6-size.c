#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Starts the program
 *
 * Return: successful execution (0), something else if error occur
 */

int main(void)
{
	printf("Size of a char: %zi byte(s)\n", sizeof(char));
	printf("Size of an int: %zi bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zi bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %zi byte(s)\n", sizeof(long long));
	printf("Size of a float: %zi byte(s)\n", sizeof(float));

	return (0);
}
