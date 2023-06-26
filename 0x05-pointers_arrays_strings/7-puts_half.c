#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints half of a string
 * @str: a pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len, j, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (j = (len - 1) / 2; n < len - 1; j++)
		{
		putchar(str[j + 1]);
		}
	}
putchar('\n');
}
