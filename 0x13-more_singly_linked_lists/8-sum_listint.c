#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node and given index
 * @head: start node
 * @idx: index
 * @n: data of the node
 * Return: updated list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *current = *head, *new_node;
    unsigned int itr;

    new_node = malloc(sizeof(listint_t));

    if (!new_node)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = current;
        *head = new_node;
        return (new_node);
    }

    for (itr = 0; itr < idx - 1; itr++)
    {
        if (current == NULL || current->next == NULL)
            return (NULL);

        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}