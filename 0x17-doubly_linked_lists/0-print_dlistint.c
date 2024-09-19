#include "lists.h"
/*
 * print_dlistint - prints a doubly linked list
 * @h: head node
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (!h)
		return (0);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}

