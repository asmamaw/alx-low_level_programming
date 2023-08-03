#include "main.h"
/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1ul << index);

	if (index > 63)
		return (-1);
	*n = *n & mask;
	return (1);
}
