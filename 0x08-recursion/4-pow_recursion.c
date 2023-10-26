#include "main.h"

/**
 * _pow_recursion - calculate exponentiation of a number recursively
 *
 * @x: An Integer.
 * @y: An Integer.
 * Return: Pow of an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
