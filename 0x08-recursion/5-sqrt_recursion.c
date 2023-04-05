#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural
 * square root of a number
 * @n: number input
 * Return: return (-1) when theres is no natural sqrt
 * else returns squareroot of the num
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}


/**
 * actual_sqrt_recursion - function that finds actual
 * squareroot of the number
 *@n: number input
 * @c: condition
 * Return: the squareroot of inputed number
 */

int actual_sqrt_recursion(int n, int c)
{
	if (c * c > n)
	{
		return (-1);
	}
	if (c * c == n)
	{
		return (c);
	}
	return (actual_sqrt_recursion(n, c + 1));
}
