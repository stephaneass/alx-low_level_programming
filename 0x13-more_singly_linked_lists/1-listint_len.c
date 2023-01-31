#include "lists.h"

/**
 * listint_len - enter point
 * @h: the  linked listint_t list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *data = h;
	size_t nbr = 0;

	while (data != NULL)
	{
		nbr += 1;
		data = data->next;
	}

	return (nbr);
}
