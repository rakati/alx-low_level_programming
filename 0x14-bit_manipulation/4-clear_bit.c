#include "main.h"

/**
 * clear_bit - set off the value of a bit at a given index.
 *
 * @n: the number to modify its bit value
 * @index: a unsigned int position of the bit to set off on of a number
 * Return: 1 on succeed -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
