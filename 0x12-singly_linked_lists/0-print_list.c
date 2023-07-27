#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function printing all elements of list_t list
 * @h:pointer ot lists
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		list++;
		h = h->next;
	}
	return (list);
}
