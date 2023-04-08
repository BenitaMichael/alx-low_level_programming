#include <stdio.h>
#include "main.h"

/**
 * main - Entry point - program that prints the number
 * of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) if successful
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
