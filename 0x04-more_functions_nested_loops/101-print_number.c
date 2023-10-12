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
