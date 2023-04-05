#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @c: character r string input
 * Return: result
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(c + 1);
	}
	 _putchar("\n");
}
