#include <stdio.h>
/**
 *main - Entry point
 *Description: printing the lowercase alphabet in reverse
 *Return: Always 0 (successful)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	       putchar(i);	
	putchar('\n');
	return (0);
}
