#include "lists.h"
/**
 * pop_listint - deletes first element of a list
 * @head: start node
 * Return: value of deleted node
 */

int pop_listint(listint_t **head)
{
    listint_t *deleted_node = *head;
    int n;

    if (!deleted_node)
        return (0);

    *head = (*head)->next;
    n = deleted_node->n;

    free(deleted_node);
    return (n);
}