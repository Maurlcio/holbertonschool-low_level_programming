#include "main.h"

/**
 * create_file - i wonder
 * @filename: files name. name bond
 * @text_content: literally what can i even explain here
 * Return: success! or not
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		wrt = write(fd, text_content, len);
		if (wrt == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
