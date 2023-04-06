#include "main.h"

/**
 * _strlen_function - function that returns the length of a string
 * @s: string input
 * Return: returns the length of a string
 */
int _strlen_function(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_function(s + 1));
}

/**
 * compare - compares each character of the string
 * @s: string input
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: (0) if no comparison and (1) if there is
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string input
 * Return: 1 if s is a palindrome, 0 if not a palindrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_function(s) - 1));
}

