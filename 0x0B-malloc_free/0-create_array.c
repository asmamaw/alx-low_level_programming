#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and intializes it with char
 * @size: the sixe of the char
 * @c: a variable of char
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (unsigned int *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}

