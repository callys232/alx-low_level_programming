#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, negative
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (1 > 5)
{
	printf("Last digit of %d is %d and is great than 5\n", n, 1);
}
	else if ( 1 == 0)
	printf("Last digit of %d and is 0\n" n, 1);
}
	else
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, 1);
}
	return (0);
}