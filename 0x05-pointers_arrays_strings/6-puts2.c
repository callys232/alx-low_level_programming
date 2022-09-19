#include <stdio.h>
#include "main.h"
/**
 * put2 - prints every other character
 * @str: string
 *
 * Return: nothing
 */
\void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\n')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
	}
	putchar(10);
}
