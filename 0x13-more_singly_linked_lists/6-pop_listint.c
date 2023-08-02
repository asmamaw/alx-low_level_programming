#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr = *head;

	if (ptr == NULL)
		return (0);

	data = (*head)->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
