#include "main.h"

/**
 *_abs - Compute the absolute value of an integer
 *@n: Number to be computed
 *Return: Absolute value of a number
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
