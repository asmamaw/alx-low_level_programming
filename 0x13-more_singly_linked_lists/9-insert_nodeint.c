#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *add_node;
	unsigned int pos;
	unsigned int count = 0;

	/* create node */
	add_node = (listint_t *)malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
		return (*head);
	}

	/* search of position to insert */
	pos = idx - 1;
	while (ptr && count != pos)
	{
		count++;
		ptr = ptr->next;
	}

	/* general case */
	if (count == pos && ptr)
	{
		add_node->next = ptr->next;
		ptr->next = add_node;
		return (add_node);
	}

	free(add_node);
	return (NULL);
}
