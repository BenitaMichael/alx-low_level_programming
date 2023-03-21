#include "main.h"

/**
 *_isalpha - Checking for uppercase letters
 *@c: The characters to checked
 *Return: 1 for uppercase letter and 0 for lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
