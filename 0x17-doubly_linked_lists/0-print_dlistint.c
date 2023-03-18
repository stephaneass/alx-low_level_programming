#include "lists.h"

/**
 * print_dlistint - main point
 * @dlistint_t: the list of nodes
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;

		i++;
	}
	return (i);
}
