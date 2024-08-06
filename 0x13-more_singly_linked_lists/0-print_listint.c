lude "lists.h"
/**
 *  * print_listint - prints the list node value
 *   * @h: head of the linked list
 *    * Return: size of the linked list
 *     */

size_t print_listint(const listint_t *h)
{
		const listint_t *ptr = h;
			size_t len = 0;

				while (ptr)
						{
									printf("%d\n", ptr->n);
											ptr = ptr->next;
													len++;
														}
					return (len);
}
