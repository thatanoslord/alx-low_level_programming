#include "lists.h"
#include "stdlib.h"
/*
 * delete_dnodeint_at_index - delete a node at given index
 * @head: head node
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;

	if (curr == NULL)
		return (-1);

	if (curr->next)
		curr->next->prev = curr->prev;
	if (curr->prev)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}

