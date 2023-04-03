#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory
 * @b: constant byte
 * @n: bytes filled
 * Return: number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
