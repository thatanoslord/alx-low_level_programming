#include "lists.h"
/**
 * free_listint - frees the linked list
 * @head: start node
 *
 */

void free_listint(listint_t *head)
{
    listint_t *current;

    while (head)
    {
        current = head;
        head = head->next;
        free(current);
    }
}