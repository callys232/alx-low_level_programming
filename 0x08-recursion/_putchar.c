#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to string
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
