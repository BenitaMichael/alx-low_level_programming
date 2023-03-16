#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	printf("Size of a char: %lu byte(si)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}