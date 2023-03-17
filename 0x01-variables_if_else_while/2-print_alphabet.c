#include <stdio.h>
/**
 *main - Entry point
 *Description: Print alphabets in lowercase
 *Return: Always 0 (successful)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
