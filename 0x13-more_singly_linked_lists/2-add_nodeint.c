nclude "lists.h"
/**
 *  * add_nodeint - adds a node at the beginning of the list
 *   * @head: head node
 *    * @n: number to add
 *     * Return: updated list
 *      */

listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new_node;

			new_node = malloc(sizeof(listint_t));

				if (!new_node)
							return (NULL);

					new_node->next = *head;
						new_node->n = n;
							*head = new_node;

								return (*head);
}
