#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _puts - a function that prints a string
 * @str: a pointer to a string
 * Return: always void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, str, strlen(str));
	}
	write(1, '\n', 1);
}
