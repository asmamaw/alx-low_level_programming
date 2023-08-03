#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - print an unsigned int in binary
 *
 * @n:
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1ul << 63;
	char chr = '0';

	while (!(bit & n) && bit != 0)
		bit = bit >> 1;

	if (bit == 0)
		_putchar(chr);

	while (bit)
	{
		if (bit & n)
			chr = '1';
		else
			chr = '0';
		_putchar(chr);
		bit = bit >> 1;
	}
}
