#include "main.h"
/**
 * create_array - creates an array of chars and intializes it with char
 * @size: the sixe of the char
 * @c: a variable of char
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

