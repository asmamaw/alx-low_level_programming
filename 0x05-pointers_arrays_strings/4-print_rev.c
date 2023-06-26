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
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
