#include "lists.h"
/*
 * sum_dlistint - cumulative sum of a list
 * @head: head node
 * Return: cumulative sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

