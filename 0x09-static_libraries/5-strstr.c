#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string input
 * @needle: string input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *pp = needle;

		while (*p == *pp && *pp != '\0')
		{
			p++;
			pp++;
		}
		if (*pp == '\0')
			return (haystack);
	}
	return (0);
}
