# include <stdio.h>
/**
 *main - Entry point
 *Description: print alphabets in uppercase and lowercase
 *Return: Always 0 (successful)
 */
int main(void)
{
	char u;
	char l;

	for (u = 'A' ; u <= 'Z' ; u++)
		putchar(u);
	for (l = 'a' ; l <= 'z' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
