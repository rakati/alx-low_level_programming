#include <stdio.h>
#include "main.h"

/**
 * usage - check number of args, if not correct show usage
 *
 * @ac: number of program argument
 */
void usage(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * cp - mimic behaviour if cp command copy file to another
 *
 * @file_from: string path of the file to copy from.
 * @file_to: string path of the new file to copy to.
 * Return: 0 on success, -1 can't open or create file_to with permission
 * required, otherwise fd number if can't close file descriptor.
 */
int cp(char *file_from, char *file_to)
{
	int fd_to, fd_from, r;
	char buf[1025];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-2);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
				 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		return (-1);

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		buf[r] = '\0';
		write(fd_to, buf, r);
	}
	if (r < 0)
		return (-1);
	if (close(fd_to) == -1)
		return (fd_to);
	if (close(fd_from) == -1)
		return (fd_to);
	return (0);
}

/**
 * main - check the code
 * @ac: number of program argument
 * @av: array of string arguments of the program.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int st;

	usage(ac);
	st = cp(av[1], av[2]);
	if (st == -2)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (st == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	else if (st != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", st);
		exit(100);
	}
	return (0);
}
