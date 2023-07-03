#include "main.h"
/**
 * _strchr - a function that locates a chaacter in a string
 * @s:a pointer to string
 * @c;located character
 * Return:char pointer
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}

