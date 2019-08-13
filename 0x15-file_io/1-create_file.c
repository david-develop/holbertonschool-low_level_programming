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
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int sz;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	buf = malloc(sizeof(char) * (_strlen(text_content) + 1));
	if (buf == NULL)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		buf[i] = text_content[i];
	}
	buf[i] = '\0';

	sz = write(fd, buf, (_strlen(text_content) + 1));
	if (sz == -1)
		return (-1);

	close(fd);
	free(buf);
	return (1);
}
