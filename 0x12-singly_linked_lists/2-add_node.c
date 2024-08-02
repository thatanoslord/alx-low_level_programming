#include "lists.h"
/**
 * add_node - adds a node
 * @head: head pointer
 * @str: new node str
 * Return: list node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
