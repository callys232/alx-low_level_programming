#include <stdio.h>
#include <stdlib.h>
#include <ctype>
#include <string.h>
/**
 * check_num - check - tring if there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	unsigned int  count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			count++;
		}
		return (1);
	}

	/**
	 * main - print the name of program
	 * @argc: Argument count
	 * @argv: Arguments
	 *
	 * Return: 0 always
	 */

	int main(int argc, char *argv[])
	{
		int count, str_to_int;
		int sum = 0;

		count = 1;
		while (count < argc)
		{
			if (check_num(argv[count]))

			{
				str_to_int = atoi(argv[count]);
				sum += str_to_int;
			}
			count++;
		}
		printf("%d\n", sum);

		return (0);
	}
