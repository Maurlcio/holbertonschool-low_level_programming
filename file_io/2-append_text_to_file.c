#include "main.h"

/**
 * append_text_to_file - at the end
 * @filename: amog
 * @text_content: us
 * Return: suc ces or no
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
