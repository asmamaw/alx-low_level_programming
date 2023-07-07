#include "main.h"
/**
 * _strlen - a function that returns the length of string
 * return:int
 * @s:pointer to string
 * Return: always return int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
