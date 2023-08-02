#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *ptr = head;

	if (!head)
		exit(98);

	while (ptr)
	{
		printf("[%p] %i\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
