#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 in success, -1 in failure
 *
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";

	write(1, quote, strlen(quote) + 1);
	return (1);
}
