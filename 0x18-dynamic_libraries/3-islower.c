#include "main.h"

/**
 *_islower - Checking for lowercase letters
 *@c: The characters to checked
 *Return: 0 for uppercase letter and 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
