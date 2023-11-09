#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print args of variadic function
 *
 * @separator: a string to print as a separator between numbers
 * @n: constant integer represent number of args
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 < n)
			printf("%s", separator ? separator : "");
		else
			printf("\n");
		i++;
	}
	va_end(ap);
}
