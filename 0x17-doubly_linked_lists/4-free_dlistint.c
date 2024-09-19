#include "lists.h"
#include <stdlib.h>
/*
 * free_dlistint - frees a doubly linked list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

