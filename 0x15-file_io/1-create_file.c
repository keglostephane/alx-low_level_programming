#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of the file to create
 *
 * @text_content: content to write in the file
 *
 * Return: 1 on success, -1 on failure
 *
 * the created file must have the permission 600. if the file exists,
 * do not change the permissions.
 *
 * if the file already exits, truncate it.
 * if `filename` is NULL, return -1
 * if `text_content` is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int i, len, fd;
	ssize_t bytes;

	if (!filename)
		return (-1);

	if (open(filename, O_WRONLY) == -1 && errno == ENOENT)
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	else
		fd = open(filename, O_WRONLY | O_TRUNC);

	if (fd == -1)
		return (-1);

	text_content = text_content ? text_content : "";

	for (i = 0, len = 0; text_content[i] != '\0'; i++)
		len++;

	bytes = write(fd, text_content, len);
	close(fd);

	if (bytes == -1)
		return (-1);

	return (1);
}
