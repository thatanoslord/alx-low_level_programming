#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at index
 * @head: head node
 * @index: index to search for
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int itr = 0;

    for (itr = 0; itr < index && head->next; itr++)
        head = head->next;

    if (itr < index)
        return (NULL);

    return (head);
}