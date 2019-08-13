#include "holberton.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: Always 0 if correct.
 */
int main(int ac, char **av)
{
	char *file_from = av[1];
	char *file_to = av[2];
	char buf[1024];
	int fd, fd2, letter_co;
	ssize_t buf_sz = 1024;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (buf_sz == 1024)
	{
		buf_sz = read(fd, buf, buf_sz);
		letter_co = write(fd2, buf, buf_sz);
		if (buf_sz == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (letter_co == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
