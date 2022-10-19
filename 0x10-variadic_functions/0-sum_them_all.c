#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: num of args
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argsptr;

	if (n == 0)
		return (0);

	va_start(argsptr, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(argsptr, int);
	
	va_end(argsptr);

	return (sum);
}
