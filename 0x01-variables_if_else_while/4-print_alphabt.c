#include <stdio.h>
/**
 *main - Entry point
 *Description: prints lowercase except q and e
 *Return: Always 0 (sucessful)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n')
	return (0);
}
