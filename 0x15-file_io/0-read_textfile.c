#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: filename string.
 * @letters: number of letters it should read and print.
 * Return: he actual number of letters it could read and print or 0 if the file
 * can't be opened.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int letter_co;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	letter_co = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (letter_co == -1)
		return (0);

	close(fd);
	free(buf);
	return (letter_co);
}
