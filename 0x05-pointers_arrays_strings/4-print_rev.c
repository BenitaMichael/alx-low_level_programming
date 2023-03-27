#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int lenght = 0;
	int c;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;

	for (c = lenght; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
