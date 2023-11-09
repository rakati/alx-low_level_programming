#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all args type of variadic function
 *
 * @format: a string represent format of variadic args
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char *s;
	unsigned int i = 0;
	char p;

	va_start(ap, format);
	while (format && format[i])
	{
		p = 1;
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			p = 0;
		}
		if (p && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
