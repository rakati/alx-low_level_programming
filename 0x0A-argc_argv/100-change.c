#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints a number using just _putchar
 *
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10 != 0)
		print_number(n < 0 ? (n / 10) * -1 : n / 10);
	_putchar('0' + (n < 0 ? (n % 10) * -1 : n % 10));
}

/**
 * main - print the program name
 *
 * @ac: number of arguments
 * @av: array of strings
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char s[] = "Error\n";
	int res = 0, i = 0, n;

	if (ac != 2)
	{
		while (s[i])
			_putchar(s[i++]);
		return (1);
	}
	n = atoi(av[1]);
	if (n < 0)
		res = 0;
	else
	{
		res += n / 25;
		n %= 25;
		res += n / 10;
		n %= 10;
		res += n / 5;
		n %= 5;
		res += n / 2;
		n %= 2;
		res += n;
	}
	print_number(res);
	_putchar('\n');

	return (0);
}
