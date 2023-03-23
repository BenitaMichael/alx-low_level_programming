#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: lowercase (1) or (0) for anything
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
