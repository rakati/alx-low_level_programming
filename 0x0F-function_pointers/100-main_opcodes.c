#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performs simple operations.
 *
 * @ac: integer represent number of args
 * @av: array of program args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int bytes;
	int i = 0;
	unsigned char *p;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	p = (unsigned char *)main;
	while (i < bytes)
		printf("%02x ", p[i++]);
	printf("\n");
	return (0);
}
