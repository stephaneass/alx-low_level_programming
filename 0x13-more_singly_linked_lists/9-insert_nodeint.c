#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: the original list
 * @idx: the index
 * @n: the new data
 *
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	while (count < idx && *head != NULL)
	{
		*head = *head->next;
		count += 1;
	}

	if (count < idx)
		return (NULL);
	else
	{
		temp->next = *head->next;
		*head->next = temp;
	}

	return (temp);
}
