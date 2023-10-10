#include "main.h"
/**
 * print_sign - Check the sign of an integer
 *
 * @c: an integer to check its sign
 * Return: (int)
 *	- (1): character is an alphabet
 *	- (0): character is not an alphabet
 *	- (-1): character is not an alphabet
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
