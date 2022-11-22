#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdin
 * @filename: ya guessed it
 * @letters: yeah this is pretty self-explanatory
 * Return: signed size_t var that returns number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	char *mal;

	mal = malloc(letters);
	if (mal == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rd = read(fd, mal, letters);
	if (rd == -1)
		return (0);
	wrt = write(STDOUT_FILENO, mal, rd);
	if (wrt == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(mal);
	return (wrt);
}

