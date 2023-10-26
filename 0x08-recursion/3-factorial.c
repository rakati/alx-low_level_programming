#include "main.h"

/**
 * factorial - calculate factorial of a number recursively
 *
 * @n: An Integer.
 * Return: factorial of an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
