#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
