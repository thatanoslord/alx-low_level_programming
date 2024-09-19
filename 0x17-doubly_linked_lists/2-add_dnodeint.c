#include "lists.h"
#include "stdlib.h"
/*
 * add_dnodeint - Adds a node at start of the list
 * @head: pointer to head node
 * @n: new value
 * Return: Updated List
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (!current)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	while (current->prev)
	{
		current = current->prev;
	}

	new->next = current;
	if (current)
		current->prev = new;

	*head = new;
	return (*head);
}

