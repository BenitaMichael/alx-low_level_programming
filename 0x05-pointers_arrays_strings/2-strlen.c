#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: returns the lenght of string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
