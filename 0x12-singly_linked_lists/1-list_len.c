#include "lists.h"
/**
 * list_len - finds the number of elements in list
 * @h:the linked list_t list
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
