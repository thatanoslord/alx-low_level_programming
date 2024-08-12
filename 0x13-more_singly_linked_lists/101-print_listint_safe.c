#include "lists.h"
/**
 * print_listint_safe - prints the list node value
 * @head: head of the linked list
 * Return: size of the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL, *safety_node;
	size_t counter = 0;
	size_t safety;

	tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		counter++;
		safety_node = head;
		safety = 0;

		while (safety < counter)
		{
			if (safety_node == tmp)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			safety_node = safety_node->next;
			safety++;
		}

		if (!head)
		exit(98);
	}
	
	return (counter);
}
