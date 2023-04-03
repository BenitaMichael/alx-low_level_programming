#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
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
