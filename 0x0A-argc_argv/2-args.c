#include <stdio.h>
#include "main.h"

/**
 * main - Entry point - program that prints all
 * arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) if successful
 */

int main(int agrc, char *agrv[])
{
	int i = 0;

	while (i < agrc)
	{
		printf("%s\n", agrv[i]);
			i++;
	}
	return (0);
}
