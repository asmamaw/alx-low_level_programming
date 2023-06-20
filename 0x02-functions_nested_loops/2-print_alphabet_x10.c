#include "main.h"

/**
 * print_alphabet_x10 - function to print 10 times
 * return: always void
 */
void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
