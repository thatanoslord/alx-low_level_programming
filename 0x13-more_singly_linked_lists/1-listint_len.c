#include "lists.h"
/**
 *  * listint_len - returns the length of the list
 *   * @h: head node
 *    * Return: length
 *     */

size_t listint_len(const listint_t *h)
{
		const listint_t *ptr = h;
			size_t len = 0;

				while (ptr)
						{
									ptr = ptr->next;
											len++;
												}
					return (len);
}
