#include <stdio.h>
/**
 *main - Entry point
 *Description: printing all possible combinations of single-digit numbers
 *Return: Always 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
