#include "main.h"

/**
 * check_prime - check if prime recursively
 *
 * @a: An Integer.
 * @n: An Integer.
 * Return: 1 if prime otherwise 0.
 */
int check_prime(int a, int n)
{
	if (a * a > n)
		return (1);
	if (n % a == 0)
		return (0);
	return (check_prime(a + 2, n));
}

/**
 * is_prime_number - check number is prime or not
 *
 * @n: An Integer.
 * Return: 1 if prime otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (check_prime(3, n));
}
