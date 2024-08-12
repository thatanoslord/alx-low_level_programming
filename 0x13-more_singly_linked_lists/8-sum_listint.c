#include "lists.h"
/**
* sum_listint - returns sum of all data in the linked list
* @head: head node
* 
* Return: cumulative sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
