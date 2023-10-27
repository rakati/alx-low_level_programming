#include "main.h"

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
	if (av)
		print_number(ac - 1);
	_putchar('\n');
	return (0);
}
