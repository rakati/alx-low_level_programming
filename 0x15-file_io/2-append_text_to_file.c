#include "main.h"

/**
 * _strlen - len of string
 *
 * @s: array of characters
 * Return: len of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: a string represent path of the file to read.
 * @text_content: NULL terminated string to add to the file
 *
 * Return: 1 on success otherwise -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, _strlen(text_content)) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
