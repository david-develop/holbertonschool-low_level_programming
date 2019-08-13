#include "holberton.h"

/**
 * printerr_97 - function that print error and exit 97 when arguments != 3.
 */
void printerr_97(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * printerr_98 - function that print error and exit 98, if file_from does not
 * exist, or if you can not read it.
 * @file_from: first argument.
 */
void printerr_98(char *file_from)
{
	dprintf(2, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * printerr_99 - function that print error and exit 99, if file_to can't be
 * created or if write fails.
 * @file_to: second argument.
 */
void printerr_99(char *file_to)
{
	dprintf(2, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * printerr_100 - function that print error and exit 100 if close fails
 * @fd: file descriptor value.
 */
void printerr_100(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

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
		printerr_97();
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		printerr_98(file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
		printerr_99(file_to);
	while (buf_sz == 1024)
	{
		buf_sz = read(fd, buf, buf_sz);
		if (buf_sz == -1)
			printerr_98(file_from);
		letter_co = write(fd2, buf, buf_sz);
		if (letter_co == -1)
			printerr_99(file_to);
	}
	if (close(fd) < 0)
		printerr_100(fd);
	if (close(fd2) < 0)
		printerr_100(fd2);
	return (0);
}
