nclude "lists.h"
/**
 *  * add_nodeint_end - adds a node to the end
 *   * @head: head node
 *    * @n: element to add
 *     * Return: updated list
 *      */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new_node, *current;

			new_node = malloc(sizeof(listint_t));

				if (!new_node)
							return (NULL);

					new_node->n = n;

						current = *head;

							if (!current)
										*head = new_node;
								else
										{
													while (current->next)
																	current = current->next;
															current->next = new_node;
																}
									return (*head);
}
