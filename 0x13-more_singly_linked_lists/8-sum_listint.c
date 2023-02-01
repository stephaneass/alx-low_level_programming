#include "lists.h"

/**
 * sum_listint - sum of all the data in node.
 * @head: the listint_t list.
 *
 * Return: 0 or sum.
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