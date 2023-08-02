#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *ptr;

	if (head)
	{
		node = head;
		ptr = head->next;
		while (ptr)
		{
			free(node);
			node = ptr;
			ptr = ptr->next;
		}
		free(node);
	}
}
