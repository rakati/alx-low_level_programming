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
	int i = 0;

	if (ac >= 1)
		while (av[0][i])
			_putchar(av[0][i++]);
	_putchar('\n');
	return (0);
}
