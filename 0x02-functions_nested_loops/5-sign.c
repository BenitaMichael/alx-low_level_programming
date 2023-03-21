#include "main.h"

/**
 *print_sign - prints sign of a number
 *@n: The number to be checked
 *Return: 1 and prints + if it is greater 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
