#include "lists.h"
/**
 * free_listint_safe - frees a list with loop safety
 * @h: head node
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t len = 0;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		if ((*h - (*h)->next) > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
