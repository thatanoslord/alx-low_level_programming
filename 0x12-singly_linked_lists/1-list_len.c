#include "lists.h"
/**
 * list_len - calculates list length
 * @h: list pointer
 * Return: list length
 */

size_t list_len(const list_t *h)
{
    size_t length = 0;

    while (h)
    {
        length++;
        h = h->next;
    }

    return (length);
}