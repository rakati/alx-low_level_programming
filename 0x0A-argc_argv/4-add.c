#include "main.h"

/**
 * read_number - read a number from string
 *
 * @s: array of char
 * Return: integer
 */
int read_number(char *s)
{
	int a = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] > '9' || s[i] < '0')
			return (-1);
		a = (s[i] - '0') + a * 10;
		i++;
	}
	return (a);
}

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
	int i = 0, res = 0, tmp;

	i = 1;
	while (i < ac)
	{
		tmp = read_number(av[i++]);
		if (tmp == -1)
		{
			i = 0;
			while (s[i])
				_putchar(s[i++]);
			return (1);
		}
		res += tmp;
	}
	print_number(res);
	_putchar('\n');

	return (0);
}
