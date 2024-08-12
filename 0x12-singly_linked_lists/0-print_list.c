<<<<<<< HEAD
#include "lists.h"
/**
 * print_list - prints a list
 * @h: list pointer
 * Return: list length
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->length, h->str);

		length++;
		h = h->next;
	}

	return (length);
}
=======
#include "lists.h"
/**
 * print_list - prints a list
 * @h: list pointer
 * Return: list length
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		len++;
		h = h->next;
	}

	return (len);
}
>>>>>>> 7e33ef50aebe679001b3e5208df7e2f38a1eca66
