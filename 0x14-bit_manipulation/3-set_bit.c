#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: the number to modify its bit value
 * @index: a unsigned int position of the bit to set on of a number
 * Return: 1 on succeed -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
