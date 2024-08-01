#include "lists.h"
/**
 * add_node - adds a node
 * @head: head pointer
 * @str: new node str
 * Return: list node
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *n_node;
    size_t length;

    n_node = malloc(sizeof(list_t));

    if (!n_node)
        return (NULL);

    for (length = 0; str[length]; length++)
        ;

    n_node->str = strdup(str);
    n_node->length = length;
    n_node->next = *head;
    *head = n_node;

    return (*head);
}