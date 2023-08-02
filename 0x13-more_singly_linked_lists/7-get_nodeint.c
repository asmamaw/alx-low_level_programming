#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	while (ptr && count != index)
	{
		count++;
		ptr = ptr->next;
	}
	if (ptr && count == index)
		return (ptr);
	else
		return (NULL);
}
