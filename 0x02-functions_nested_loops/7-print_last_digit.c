#include "main.h"
/**
 *print_last_digit - prints the last number
 *@n: Number to be treated
 *Return: Last digit of a number
 */

int print_last_digit(int n)
{
	int last_value;

	last_value = n % 10;
	if (n < 0)
	{
		last_value = last_value * -1;
	}
	_putchar(last_value + '0');
	return (last_value);
}
