#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - append at the end of a file
 *
 * @filename: name of the file
 *
 * @text_content: content to append at the end of file
 *
 * Return: 1 on success, -1 on failure
 *
 * Do not create the file if it does not exit
 *
 * If `filename` is NULL return -1
 *
 * if `text_content` is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, len, fd;
	ssize_t bytes;

	if (!filename)
		return (-1);

	if (open(filename, O_WRONLY) == -1 &&
	    (errno == ENOENT || errno == EACCES))
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0, len = 0; text_content[i] != '\0'; i++)
		len++;

	bytes = write(fd, text_content, len);
	close(fd);

	if (bytes == -1)
		return (-1);

	return (1);
}
