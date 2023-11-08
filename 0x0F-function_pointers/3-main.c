#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 *
 * @ac: integer represent number of args
 * @av: array of program args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	f = get_op_func(av[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	res = f(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
