#include <stdio.h>

/**
 * print_alphabet - print alphabets to the standard output
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
}
