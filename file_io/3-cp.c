#include "main.h"

/**
 * main - cp func
 * @argc: argument count
 * @argv: argument array
 * Return: success hopefully
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, r, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd1, buf, BUFSIZ)) > 0)
	{
		if (fd2 < 0 || write(fd2, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			exit(99);
		}
	}
	if (fd1 < 0 || !fd1 || r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(fd1);
	b = close(fd2);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
