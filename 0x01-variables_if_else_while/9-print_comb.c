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
		if(i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
