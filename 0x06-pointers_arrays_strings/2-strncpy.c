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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	*(dest + i) = '\0';
	return (dest);
}
