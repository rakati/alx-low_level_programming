#include "main.h"

/**
 * binary_sqrt - Calculate square root of a number recursively
 * using binary search
 *
 * @l: An Integer represent low.
 * @h: An Integer represent high.
 * @n: An Integer to find its square root
 * Return: Integer Square root of n
 */
int binary_sqrt(int l, int h, long int n)
{
	long int mid;

	if (l > h)
		return (-1);
	mid = (l + h) / 2;
	if (mid * mid < n)
		return (binary_sqrt(mid + 1, h, n));
	else if (mid * mid > n)
		return (binary_sqrt(l, mid - 1, n));
	return (mid);
}

/**
 * _sqrt_recursion - Calculate square root of a number recursively
 * we will use binary search to find the square root in log(n)
 *
 * @n: An Integer.
 * Return: Square root of an integer
 */
int _sqrt_recursion(int n)
{
	return (binary_sqrt(1, n, n));
}
