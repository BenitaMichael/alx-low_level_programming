#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of
 * its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) if successful
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
