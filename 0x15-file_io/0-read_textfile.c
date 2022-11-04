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
	int fd;
	ssize_t rc, wc;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (-1);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	rc = read(fd, buffer, letters);

	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc);

	if (wc == -1 || wc != rc)
		return (0);

	close(fd);
	free(buffer);

	return (wc);
}
