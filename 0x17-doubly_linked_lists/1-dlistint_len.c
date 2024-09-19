#include "lists.h"
/*
 * dlistint_len - finds the length of list
 * @h: head node
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

