#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_rev - a function that prints string in revers
 * @s: a pointer to string
 * Returns:void
 */
void print_rev(char *s)
{
	int i, len, tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (tmp = len - 1; tmp >= 0; tmp--)
	{
		write(1, s, (len - 1));
	}
	write(1, "\n", 1);
}
