#include "lists.h"
/*
 * get_dnodeint_at_index - gets a node at specific index
 * @head: head node
 * @index: index to get node at
 * Return: address of returned node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		unsigned int counter = 0;

			if (!head)
						return (NULL);

				while (head->prev)
							head = head->prev;

					while (head)
							{
										if (counter == index)
														return (head);
												head = head->next;
														counter++;
															}

						return (NULL);
}
