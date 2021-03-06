#include "holberton.h"

/**
 * _strlen - finds the length of a given string.
 * @s: input string.
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to open.
 * @text_content: NULL terminated string to write at the end of the file.
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int sz;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	sz = write(fd, text_content, _strlen(text_content));
	if (sz == -1)
		return (-1);

	close(sz);
	close(fd);
	return (1);
}
