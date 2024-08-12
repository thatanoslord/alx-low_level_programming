#include "lists.h"
/**
 * add_node_end - adds a node to the end
 * @head: head pointer
 * @str: new node str
 * Return: list node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t len;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new_node->str = strdup(str);
	new_node->len = len;

	current = *head;

	if (!current)
		*head = new_node;
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (*head);
}
