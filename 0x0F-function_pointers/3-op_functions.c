#include "3-calc.h"

/**
 * op_add - a function to calculate the sum of two integers.
 *
 * @a: integer
 * @b: integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to calculate the difference of two integers.
 *
 * @a: integer
 * @b: integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to calculate the product of two integers.
 *
 * @a: integer
 * @b: integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to calculate the division of two integers.
 *
 * @a: integer
 * @b: integer
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function to calculate the remainder of division of two integers.
 *
 * @a: integer
 * @b: integer
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
