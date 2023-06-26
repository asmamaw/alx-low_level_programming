#include "main.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
 * puts2 - a function that prints every other string
 * @str: a pointer to string
 * Return:void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\0');
}
