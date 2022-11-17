#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: a variable name to print
 * @f: a variable to a pointer
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
