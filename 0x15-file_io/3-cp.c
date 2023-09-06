#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * close_fd - close a file descriptor
 *
 * @fd: file descriptor
 *
 * Return: 1 if closed successfully, 0 otherwise
 */
int close_fd(int fd)
{
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (0);
	}

	return (1);
}

/**
 * cpy_file - copy content of a file to another one
 *
 * @fd1: source file
 *
 * @fd2: destination file
 *
 * @filename1: source filename
 *
 * @filename2: destination filename
 *
 */
void cpy_file(int fd1, int fd2, const char *filename1, const char *filename2)
{
	ssize_t bytes, written;
	char *buffer[1024];

	/* read and write to destination until we reach end of file of source */
	while (1)
	{
		bytes = read(fd1, buffer, 1024);

		if (bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", filename1);
			exit(98);
		}
		if (!bytes)
			break;

		written = write(fd2, buffer, bytes);

		if (written == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
}

/**
 * main - copies content of file to another file
 *
 * @argc: number of arguments
 *
 * @argv: list of arguments
 *
 * Return: 0 in success, in failure any value different of 0
 */
int main(int argc, char **argv)
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* check if the source file exists and can be read */
	if (open(argv[1], O_RDONLY) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	/* check if the destination exists and can be written otherwise */
	/* create a new file with permission 0664 */
	if (open(argv[2], O_WRONLY) == -1 && errno == ENOENT)
		fd2 = open(argv[2], O_WRONLY | O_CREAT,
			   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	/* destination file exists but doesn't have write permission */
	else if (open(argv[2], O_WRONLY) == -1 && errno == EACCES)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* destination file exists and have write permission */
	else if (open(argv[2], O_WRONLY) != -1)
		fd2 = open(argv[2], O_WRONLY | O_TRUNC);

	fd1 = open(argv[1], O_RDONLY);
	cpy_file(fd1, fd2, argv[1], argv[2]);

	if (!close_fd(fd1))
		exit(100);
	if (!close_fd(fd2))
		exit(100);

	exit(EXIT_SUCCESS);
}
