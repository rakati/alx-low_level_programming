#include "main.h"
/**
 * print_alphabet - print alphabets to the standard output
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
