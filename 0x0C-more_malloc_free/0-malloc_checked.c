#include "main.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: a pointer to address  of allocated nenory space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
