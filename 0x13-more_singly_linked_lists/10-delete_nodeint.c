#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at given index
* @head: start node
* @index: index to delete the node at
* Return: 1 if success, -1 if fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *tmp;
	unsigned int itr;

	if (!curr)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (itr = 0; itr < index - 1; itr++)
	{
		if (curr == NULL || curr->next == NULL)
		return (-1);
		curr = curr->next;
	}

	tmp = curr->next;
	curr->next = tmp->next;
	free(tmp);
	return (1);
}
