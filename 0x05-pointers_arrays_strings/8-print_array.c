#include "main.h"
#include <stdio.h>
/**
 * print_array - a ffunction that prints elements of an array of integers
 * @a: a pointer to integer
 * @n:parameter a variable of integer
 * Return:void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
