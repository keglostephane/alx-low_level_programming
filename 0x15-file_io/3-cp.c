#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

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
	ssize_t bytes;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (open(argv[1], O_RDONLY) == -1 &&
	    (errno == ENOENT || errno == EACCES))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (open(argv[2], O_WRONLY) == -1 && errno == ENOENT)
		fd2 = open(argv[2], O_WRONLY | O_CREAT,
			   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	else if (open(argv[2], O_WRONLY) == -1 && errno == EACCES)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (open(argv[2], O_WRONLY) != -1)
		fd2 = open(argv[2], O_WRONLY | O_TRUNC);
	fd1 = open(argv[1], O_RDONLY);
	while ((bytes = read(fd1, buffer, 1024)))
		write(fd2, buffer, 1024);
	if (close(fd1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
