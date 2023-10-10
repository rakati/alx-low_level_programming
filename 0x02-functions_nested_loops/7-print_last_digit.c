#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: an integer
 * Return: (int) last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + n % 10);
	return (n % 10);
}
