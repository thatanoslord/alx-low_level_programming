#include "lists.h"
#include "stdlib.h"
/*
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to head node
 * @n: new value
 * Return: updated list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!curr)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	new->prev = curr;

	return (new);
}

