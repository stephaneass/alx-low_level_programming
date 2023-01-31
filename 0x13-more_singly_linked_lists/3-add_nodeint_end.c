#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning
 * @head: the original list
 * @n: the data
 *
 * Return: the address or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof (listint_t));
	listint_t *cursor = *head;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		
		cursor->next = temp;
	}
	else
		*head = temp;

	return (temp);
}
