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