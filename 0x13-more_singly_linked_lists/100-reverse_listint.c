#include "lists.h"
/**
* reverse_listint - reverses a linked list
* @head: head node
* Return: reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL, next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}
	*head = prev;

	return (*head);
}
