#include <stdio.h>

/**
 *main - prints all multiples of 3 and 5
 *Description: printing multiples of 3 and 5 till 1024
 *Return: Always 0 (successful);
 */

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
