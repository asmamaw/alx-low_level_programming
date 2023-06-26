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
	int i, len;

	len = 0;
	while (str[len] != '\')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
