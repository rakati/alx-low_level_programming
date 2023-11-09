#include "variadic_functions.h"

/**
 * sum_them_all - sum up args of variadic function
 *
 * @n: constant integer represent number of args
 * Return: args sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
