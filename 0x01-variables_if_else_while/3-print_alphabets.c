# include <stdio.h>
/**
 *main - Entry point
 *Description: print alphabets in uppercase and lowercase
 *Return: Always 0 (successful)
 */
int main(void)
{
	int u = 65;
	int l = 97;

	while (u <= 90)
	{
		putchar(u);
	}
	while (l <= 122)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
