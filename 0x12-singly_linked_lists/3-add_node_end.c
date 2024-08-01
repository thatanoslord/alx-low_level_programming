#include "lists.h"
/**
 * add_node_end - adds a node to the end
 * @head: head pointer
 * @str: new node str
 * Return: list node
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *n_node, *current;
    size_t length;

    n_node = malloc(sizeof(list_t));

    if (!n_node)
        return (NULL);

    for (length = 0; str[length]; length++)
        ;

    n_node->str = strdup(str);
    n_node->length = length;

    current = *head;

    if (!current)
        *head = n_node;
    else
    {
        while (current->next)
        {
            current = current->next;
        }
        current->next = n_node;
    }
    return (*head);
}