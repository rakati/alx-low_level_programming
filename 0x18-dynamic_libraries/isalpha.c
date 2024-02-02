#include "main.h"

/**
 * _isalpha - Check if the character is an alphabet
 *
 * @c: integer represent ascii code of a character
 * Return: (int)
 *	- 1: character is an alphabet
 *	- 0: character is not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
