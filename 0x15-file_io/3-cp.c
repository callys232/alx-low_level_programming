#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments passed to the function.
 * @argv: two files.
 *
 * Return: integer number.
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD, nBytes_read, nBytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintsf(STDERR_FILENO, "Error: Can;t write to %s\n",argv[1]);
		exit(98);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

