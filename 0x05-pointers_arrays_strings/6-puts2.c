#include "main.h"
#include <unistd.h>
/**
 * puts2 - a function that prints every other string
 * @s: a pointer to string
 * Return:void
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			write(1, s, sizeof(s));
	}
	write(1, "\n", 1);
}
