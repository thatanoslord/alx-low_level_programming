#include "lists.h"
/**
 *  * free_listint2 - frees the list and sets head to null
 *   * @head: start node
 *    */

void free_listint2(listint_t **head)
{
		listint_t *current;

			if (!head)
						return;

				while (*head)
						{
									current = *head;
											*head = (*head)->next;
													free(current);
														}
					head = NULL;
}
