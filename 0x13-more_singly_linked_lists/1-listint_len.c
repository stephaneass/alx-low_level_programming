#include "lists.h"

/**
 * listint_len - enter point
 * @h: the  linked listint_t list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
