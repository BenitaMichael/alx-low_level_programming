#include <stdio.h>
/**
 *main - Entry point
 *Description: printing all possible different combinations of two digits
 *Return: ALways 0 (successful)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; i < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
