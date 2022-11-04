#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 *
 * @filename: const char pointer - filename
 *
 * @letters: size_t - number of letters to read and print
 *
 * Return: the number of letter read
 *
 * if the file cannot be opened or read, return 0
 *
 * if `filename` is NULL return 0
 *
 * if `write` fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytes;
	short fd;
	char buffer[SIZE] = {0};

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);

	if (bytes == 0 || bytes == -1)
		return (0);

	write(1, buffer, bytes);

	close(fd);

	return (bytes);
}
