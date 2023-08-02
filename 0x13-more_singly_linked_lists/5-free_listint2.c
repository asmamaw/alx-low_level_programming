#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * the function sets the head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *ptr;

	if (head == NULL)
		return;

	node = *head;
	ptr = (*head)->next;
	while (ptr)
	{
		free(node);
		node = ptr;
		ptr = ptr->next;
	}
	free(node);
	*head = NULL;
}
