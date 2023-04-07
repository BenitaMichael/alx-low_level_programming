#include <stdio.h>
#include "main.h"

/**
 * main - Entry point - program that prints the number
 * of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) if successful
 */

int main(int agrc, char *agrv[] __attribute__((unused)))
{
	printf("%d\n", agrc -1);
		return (0);
}
