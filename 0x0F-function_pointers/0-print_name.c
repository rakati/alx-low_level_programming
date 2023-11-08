#include "function_pointers.h"

/**
 * print_name - call another function to print name
 *
 * @name: name to print
 * @f: pointer to a function takes char* and return nothing
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
