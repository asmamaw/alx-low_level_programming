#include "main.h"
/**
 * _memcpy - afunction that copies memory area
 * @dest: a pointer to destination
 * @src: a pointer to source
 * @n:size of byte
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
		*(dest++) = *(src++);
		}
	}
	return (dest);
}
