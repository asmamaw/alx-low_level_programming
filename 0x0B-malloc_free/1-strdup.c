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

	if (arr == '\0')
	{
		return (NULL);
	}
	arr = malloc(sizeof(arr))
		if (arr == NULL)
		{
			return (NULL);
		}
	if (str == NULL)
	{
		return (NULL);
	}
	arr = str;
	return (arr);
}
