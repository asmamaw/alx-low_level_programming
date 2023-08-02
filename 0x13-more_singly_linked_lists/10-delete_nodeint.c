#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *delete = *head;
	unsigned int pos;
	unsigned int count = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = delete->next;
		free(delete);
		return (1);
	}

	/* search of position to delete */
	pos = index - 1;
	while (ptr && count != pos)
	{
		count++;
		ptr = ptr->next;
	}

	/* general case */
	if (count == pos && ptr)
	{
		delete = ptr->next;
		ptr->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
