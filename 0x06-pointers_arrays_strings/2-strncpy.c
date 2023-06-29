#include "main.h"
/**
 * _strncpy - a function that copies strings
 * @dest:a pointer to string destination
 * @src:a pointer to string source
 * @n:variable for counting
 * Return: returns pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; ++n)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
