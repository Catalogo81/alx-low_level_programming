#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name variable
 * @f: function pointer
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
