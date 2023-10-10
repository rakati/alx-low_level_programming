#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: an integer
 * Return: (int) absolute value of passed number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
