#include "variadic_functions.h"
#include <stdio.h>

/**
 * _puts - print string to stdout
 *
 * @str: array of characters
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
}

/**
 * print_strings - print string args of variadic function
 *
 * @separator: a string to print as a separator between numbers
 * @n: constant integer represent number of args
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(nil)";
		_puts(s);
		if (i + 1 < n)
			if (separator)
				_puts((char *)separator);
		i++;
	}
	printf("\n");
}
