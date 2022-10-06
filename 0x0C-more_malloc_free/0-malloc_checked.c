#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
		exit(98);

	return (c);
}
