#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 *
 * @filename: name of the file to read
 *
 * @letters: number of characters to read and print
 *
 * Return: the number of characters read and printed
 *
 * if filename is NULL return 0
 * if the file cannot be opened or read, return 0
 * if write fails or does not write the expected amount of bytes return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes, printed;
	char buffer[131072]; /* 128KB buffer */

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);

	if (bytes == -1)
		return (0);

	close(fd);
	printed = write(STDOUT_FILENO, buffer, bytes);

	if (printed == -1 || printed != bytes)
		return (0);

	return (printed);
}
