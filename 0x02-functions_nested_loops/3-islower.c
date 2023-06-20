#include "main.h"

/**
 *_islower - it is a function that checks if the char is lowercase
 *@c: is the int that will use for the argument
 * return:0
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
