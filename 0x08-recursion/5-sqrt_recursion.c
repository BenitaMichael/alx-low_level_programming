#include "main.h"

/**
 * power_operation - checks for find the natural
 * square root of a number
 * @n: input number
 * @c: condition
 * Return: square root or -1 
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: natural square root or 0 if number is 0
 * or -1 if number is less than 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
i	return (power_operation(n, 2));
}
