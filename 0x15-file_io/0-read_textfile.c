#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output.
 *
 * @filename: a string represent path of the file to read.
 * @letters: a integer number of characters to read from the file.
 *
 * Return: Number of characters written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int rd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
		return (0);
	rd = read(fd, buff, letters);
	if (write(1, buff, rd) != rd)
		return (0);
	close(fd);
	free(buff);
	return (rd);
}
