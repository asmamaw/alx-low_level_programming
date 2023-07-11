#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function returing pointer to newly aalocated space
 * *@str:a pointer to char varaible
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int i;
	int size;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size = i + 1;

	arr = malloc(size * sizeof(char));
		j = 0;

		while (j < size)
		{

		if (arr == NULL)
		{
			return (NULL);
		}
		arr[J] = str[j];
		}

	return (arr);
}
