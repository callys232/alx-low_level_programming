#include "main.h"
/**
 * times_table - print 9 time table
 *
 * Return: void.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		for (num = 0; num < 10; num++)
		{
			prod = num * mult;
			if (num == 0)
			{
				_putchar(num + '0');
			}
			else if (num >= 10)
			{
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			if (num != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
