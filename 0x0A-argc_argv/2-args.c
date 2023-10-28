#include "main.h"

/**
 * main - print the program name
 *
 * @ac: number of arguments
 * @av: array of strings
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i, j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			_putchar(av[i][j++]);
		_putchar('\n');
		i++;
	}
	return (0);
}
