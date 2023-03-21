#include "main.h"

/**
 *print_alphabet_x10 - function to print alphabets a - z 10 times
 *Description: printing alphabet in lowecase 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 11)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
		i++;
	}
}
