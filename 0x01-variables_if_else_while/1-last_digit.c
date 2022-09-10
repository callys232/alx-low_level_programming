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

	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);

	if (lastDigit > 5)
		printf("greater than 5\n");

	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\");
	return (0);
}
