#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name tp print
 * @f: the function to sennd the name to
 * Return: noting
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
