#include "main.h"

/**
 * flip_bits - get number of bit different in two number
 *
 * @n: an unsigned long int
 * @m: an unsigned long int
 * Return: number of bit to flip to get same number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int res = 0;

	while (diff)
	{
		res += (diff & 1);
		diff >>= 1;
	}
	return (res);
}
