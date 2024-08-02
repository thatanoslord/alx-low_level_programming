#include "lists.h"
/**
 * list_len - calculates list len
 * @h: list pointer
 * Return: list length
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
