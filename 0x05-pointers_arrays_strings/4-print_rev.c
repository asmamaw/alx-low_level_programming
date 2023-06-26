#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_rev - a function that prints string in revers
 * @s: a pointer to string
 * Returns:void
 */
void print_rev(char *s)
{
	printf("the reverse of string %s", strrev(s));
}
