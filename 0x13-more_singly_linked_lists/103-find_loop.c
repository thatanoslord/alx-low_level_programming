#include "lists.h"
/**
 * find_listint_loop - finds the linkedlist inner loop
 * @head: head of the linked list
 * Return: faulty node of the linked list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head, *safety_node = head;

	if (!head)
		return (NULL);

	while (tmp && safety_node && tmp->next)
	{
		tmp = tmp->next->next;
		safety_node = safety_node->next;

		if (tmp == safety_node)
			{

			safety_node = head;
			tmp = tmp->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
