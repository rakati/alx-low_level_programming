#include "main.h"

/**
 * _isdigit - checks if character is a digit.
 *
 * @c: integer represent a character
 * Return: 1 if c is a digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '1')
		return (1);
	return (0);
}
