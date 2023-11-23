#include "main.h"

/**
 * get_bit - Get bit value of an integer in a giving postion
 *
 * @n: a unsigned long integer to get bit from
 * @index: a unsigned integer position of the targeted bit
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
